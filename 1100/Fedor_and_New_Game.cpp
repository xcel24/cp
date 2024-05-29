#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m,k;
	cin>>n>>m>>k;

	vector<int>arr(m);
	for(auto &x:arr)cin>>x;

	int hero;
	cin>>hero;

	int cnt = 0;

	for(int i=0;i<m;i++)if(__builtin_popcount(arr[i] ^ hero) <= k)cnt++;

	cout<<cnt<<endl;


	return 0;	
}