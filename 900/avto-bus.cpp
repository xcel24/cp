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
		ll n;
		cin>>n;

		if(n<4 or n%2 == 1) cout<<-1<<endl;
		else{

			cout<<(n+4)/6<<" "<<n/4<<endl;
		}
	}

	return 0;
}