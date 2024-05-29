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
		for(int i=0;i<n-1;i++){
			int x;
			cin>>x;

			arr.push_back(x);
		}

		int a1 = arr[0] + 1;

		cout<<a1<<" ";

		int m = arr.size();

		for(int i=0;i<m-1;i++){
			int a2=0;
			int rem = arr[i];
			if(arr[i+1] >= a1){
				int y = arr[i+1]/a1 + 1;
				a2 = a1*y + rem;
			}else{
				a2 = a1 + rem;
			}
			
			cout<<a2<<" ";

			a1 = a2;

		}

		cout<<a1 + arr[m-1]<<" ";
		cout<<endl;
	}


	return 0;
}