#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n1;
	cin>>n1;

	vector<int>a,b;

	for(int i=0;i<n1;i++){
		int x;
		cin>>x;

		a.push_back(x);
	}

	int n2;
	cin>>n2;

	for(int i=0;i<n2;i++){
		int x;
		cin>>x;

		b.push_back(x);
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	unordered_map<int,int>m;

	int currMax = INT_MIN;


	for(int i=0;i<n1;i++){
		int j = n2-1;
		while(b[j] % a[i] != 0 and j>=0){
			j--;
		}

		if(j>=0){
			int g_ratio = b[j]/a[i];
			currMax = max(currMax,g_ratio);

			m[g_ratio]++;
		}


	}

	cout<<m[currMax]<<endl;


	return 0;
}