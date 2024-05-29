#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n;

	vector<int>boys(n);
	for(auto &x:boys)cin>>x;

	cin>>m;
	vector<int>girls(m);
	for(auto &x:girls)cin>>x;

	//sort the arrays
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());

	int i = 0, j = 0, cnt = 0;
	while(i<n and j<m){
		int x1 = boys[i];
		int x2 = girls[j];

		int temp = min(x1, x2);

		if(abs(x1 - x2) <= 1){
			cnt++;
			i++;
			j++;
		}
		else if(temp == x1)i++;
		else j++;
		
	}

	cout<<cnt<<endl;


	return 0;
}