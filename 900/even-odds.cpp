#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	ll n,k;
	cin>>n>>k;

	if(n%2==0){
		if(k<= n/2)cout<< 1 + (k-1) * 2;
		else cout<< 2 + ((k - n/2) - 1 ) * 2;
	}else{
		if(k<= n/2 + 1){
			cout<<1 + (k-1) * 2;
		}
		else {
			ll temp = n/2 + 1;
			cout<<2 + ((k - temp) - 1) * 2;
		}
	}

	return 0;
}