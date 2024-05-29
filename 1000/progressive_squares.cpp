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
		int n,c,d;
		cin>>n>>c>>d;

		vector<int>arr,temp;


		for(int i=0;i<n*n;i++){
			int x;
			cin>>x;

			arr.push_back(x);
		}


		int mn = *min_element(arr.begin(),arr.end());

		int start_row = 0,start_col = 0;


		for(int i=0;i<n;i++){
			if(i==0){
				start_row = mn;
			}else{
				start_row = start_row + c;
			}

			start_col = start_row;

			temp.push_back(start_row);

			for(int j=1;j<n;j++){
				start_col = start_col + d;
				temp.push_back(start_col);
			}
		}


		sort(arr.begin(),arr.end());
		sort(temp.begin(),temp.end());


		if(arr == temp) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;


	}	



	return 0;
}