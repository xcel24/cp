#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--){

		ll int n,k;
		cin>>n>>k;

		deque<ll int>dq;

		for(int i=0;i<n;i++){
			ll int x;
			cin>>x;

			dq.push_back(x);
		}

		bool first_ship_under_attack = true;
		int ans = 0;

		while(k>0 and dq.size()>0){
			if(dq.size() == 1){
				if(dq.front() <= k){
					ans++;
				}

				break;
			}else{
				int x = dq.front();
				int y = dq.back();
				int z = min(x,y);

				dq.pop_front();
				dq.pop_back();

				if(first_ship_under_attack){
					if(z == x){
						if(k < (2*z - 1))break;
						else{
							k -= 2*z - 1;
							y -= z - 1;
							dq.push_back(y);
							ans++;
							first_ship_under_attack = false;
						}
					}else{
						if(k<2*z)break;
						else{
							k -= 2*z;
							x -= z;
							dq.push_front(x);
							ans++;
						}
					}
				}else{
					if(z == y){
						if(k< 2*z -1)break;
						else{
							k -= 2*z - 1;
							x -= z-1;
							dq.push_front(x);
							first_ship_under_attack = true;
							ans++;
						}
					}else{
						if(k < 2*z)break;
						else{
							k -= 2*z;
							y -= z;
							dq.push_back(y);
							ans++;
						}
					}
				}
			}
		}

		cout<<ans<<endl;

	}


	return 0;
}