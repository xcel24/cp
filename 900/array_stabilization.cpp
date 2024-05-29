#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	if(n==2)cout<<0<<endl;
	else{
		vector<int>arr;

		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			arr.push_back(x);
		}

		sort(arr.begin(),arr.end());

		int op1 = arr[n-2] - arr[0];
		int op2 = arr[n-1] - arr[1];

		cout<<min(op1,op2)<<endl;	
	}

	return 0;
}