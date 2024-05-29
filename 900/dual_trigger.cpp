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

		string s;
		cin>>s;

		int cnt = 0;
		for(int i=0;i<n;i++){
			if(s[i]=='1')cnt++;
		}

		if(cnt%2 == 1)cout<<"NO"<<endl;
		else{
			if(cnt==0)cout<<"YES"<<endl;
			else if(cnt==2 and s.find("11") != -1)cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}



	return 0;
}
