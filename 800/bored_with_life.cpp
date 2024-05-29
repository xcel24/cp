#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fact(ll x){
	if(x==0 or x==1) return 1;

	ll ans =1;

	for(int i=1;i<=x;i++){
		ans = ans*i;
	}

	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif


	ll a, b;
	cin>>a>>b;

	cout<<fact(min(a,b))<<endl;

	return 0;
}