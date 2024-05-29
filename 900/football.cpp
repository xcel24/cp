#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;

	size_t found_0 = s.find("0000000");
	size_t found_1 = s.find("1111111");

	if(found_0 != string::npos or found_1 != string::npos)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}