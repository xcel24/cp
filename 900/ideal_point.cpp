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
		int n,k;
		cin>>n>>k;

		vector<int>freq(51,0);
		vector<pair<int,int>>segment;

		for(int i=0;i<n;i++){
			int l,r;
			cin>>l>>r;

			segment.push_back({l,r});

			for(int j=l;j<=r;j++)freq[j]++;

		}

	bool flag = true;

	if(freq[k] == 0)cout<<"NO"<<endl;
	else{
			//start deleting edges
		for(int i=0;i<n;i++){
			int cL = segment[i].first;
			int cR = segment[i].second;

			if(k>=cL and k<= cR){
				continue;
			}
			else{
				for(int j=cL;j<=cR;j++){
					freq[j]--;
				}
			}

		}

		for(int i=1;i<51;i++){
			if(freq[i]>= freq[k] and i != k){
				flag = false;
				break;
			}
		}

		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

return 0;
}