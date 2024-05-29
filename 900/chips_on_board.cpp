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
		int n;
		cin>>n;

		vector<ll>a,b;

		ll minima_a = INT_MAX,minima_b = INT_MAX;

		for(int i=0;i<n;i++){
			ll x;
			cin>>x;

			if(x<minima_a)minima_a = x;

			a.push_back(x);
		}

		for(int i=0;i<n;i++){
			ll x;
			cin>>x;

			if(x<minima_b)minima_b = x;

			b.push_back(x);
		}

		//taking min value of a
		ll op1 = 0, op2 = 0;

		for(int i=0;i<n;i++){
			op1 += b[i] + minima_a;
		}

		for(int i=0;i<n;i++){
			op2 += a[i] + minima_b;
		}

		cout<<min(op1,op2)<<endl;
	}


	return 0;
}