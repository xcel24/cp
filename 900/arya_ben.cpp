#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;

	vector<int>arr;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;

		arr.push_back(x);
	}

	int cnt = 0, buffer = 0, i = 0;

	while(k>0 and i<n){
		int currCandies = arr[i];

		if(currCandies + buffer > 8){
			k = k - 8;
			buffer += currCandies - 8;
			cnt++;
		}else{
			k = k - (currCandies + buffer);
			buffer = 0;
			cnt++;

		}

		i++;
	}

	if(k<=0)cout<<cnt<<endl;
	else cout<<-1<<endl;

	return 0;
}