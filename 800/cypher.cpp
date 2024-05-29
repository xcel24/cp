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

		vector<int>arr;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;

			arr.push_back(x);
		}

		vector<int>ans;

		for(int i=0;i<n;i++){
			int m;
			cin>>m;

			string s;
			cin>>s;

			for(char ch:s){
				if(ch=='U'){
					arr[i] -= 1;
					if(arr[i]<0){
						arr[i] = 9;
					}
				}else{
					arr[i]+=1;
					if(arr[i]>9)arr[i]=0;
				}
			}

			ans.push_back(arr[i]);
		}

		for(auto j:ans)cout<<j<<" ";
		cout<<endl;

	}


	return 0;
}