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
		int n;
		cin>>n;

		int sum = 0;

		for(int i=1;i<=n;i++)sum += (2*i - 1) * i;
		cout<<sum<<" "<<2*n<<endl;

		for(int i=n;i>=1;i--){
			cout<<1<<" "<<i<<" ";
			for(int j=1;j<=n;j++)cout<<j<<" ";

			cout<<endl;

			cout<<2<<" "<<i<<" ";
			for(int j=1;j<=n;j++)cout<<j<<" ";
			cout<<endl;
		}

	}


	return 0;
}