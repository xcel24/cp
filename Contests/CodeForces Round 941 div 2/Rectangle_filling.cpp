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
		int n,m;
		cin>>n>>m;

		vector<vector<char>>arr(n,vector<char>(m));

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				char ch;
				cin>>ch;

				arr[i][j] = ch;
			}
		}

		pair<int,int>p1,p2;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j] == 'B'){
					p1.first = i;
					p1.second = j;

					break;
				}
			}
		}

		for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				if(arr[i][j] == 'B'){
					p2.first = i;
					p2.second = j;
					break;
				}
			}
		}

		bool isPossible = true;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j] == 'W'){
					if(i<min(p1.first,p2.first) or i>max(p1.first,p2.first) or j<min(p1.second,p2.second) or j>max(p1.second,p2.second) ){
						isPossible = false;
						break;
					}
				}
			}
		}

		if(isPossible)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}



	return 0;
}