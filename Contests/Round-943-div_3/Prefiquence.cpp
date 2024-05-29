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

		string s1;
		cin>>s1;

		string s2;
		cin>>s2;

		int ans = 0;

		vector<int>freq(2,0);

		for(int i=0;i<m;i++){
			if(s2[i]=='0')freq[0]++;
			else freq[1]++;
		}

		for(int i=0;i<n;i++){
			char ch = s1[i];

			if(freq[ch-'0'] > 0){
				ans++;
				freq[ch-'0']--;
			}else{
				break;
			}
		}

		cout<<ans<<endl;
	}



	return 0;
}