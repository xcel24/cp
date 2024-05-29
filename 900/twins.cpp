#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	vector<int>coins;

	int sum=0;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;

		sum += x;

		coins.push_back(x);
	}

	sort(coins.begin(),coins.end());

	sum = ceil(sum/2);

	int temp = 0;
	int count = 0;

	for(int i=n-1;i>=0;i--){
		temp+=coins[i];
		count++;

		if(temp>sum){
			break;
		}
	}

	cout<<count<<endl;


	return 0;
}