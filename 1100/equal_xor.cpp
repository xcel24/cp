#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;
		k = 2*k;

		vector<int>arr(2*n),freq(n+1,0);
		for(int &x:arr)cin>>x;
		for(int i=0;i<n;i++)freq[arr[i]]++;

		vector<int>g0,g1,g2;
		
		for(int i=1;i<=n;i++){
			if(freq[i]==2)g2.push_back(i);
			else if(freq[i]==1)g1.push_back(i);
			else g0.push_back(i);
		}

		int v = 0;
		for(auto x:g2){
			if(v<k){
				cout<<x<<" "<<x<<" ";
				v += 2;
			}
		}

		for(auto x:g1){
			if(v<k){
				cout<<x<<" ";
				v++;
			}
		}

		cout<<endl;

		v = 0;
		
		for(auto x:g0){
			if(v<k){
				cout<<x<<" "<<x<<" ";
				v+=2;
			}
		}

		for(auto x:g1){
			if(v<k){
				cout<<x<<" ";
				v++;
			}
		}

		cout<<endl;


	}



	return 0;
}