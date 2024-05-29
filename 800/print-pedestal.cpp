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

		int a = n/3;

		if(n%3==0)cout<<a<<" "<<a + 1 <<" "<<a - 1<<endl;
		else if(n%3==1){
			if(a-2>0){
				cout<<a+1<<" "<<a + 2 <<" "<<a - 2<<endl;
			}else{
				cout<<a<<" "<<a + 2 <<" "<<a - 1<<endl;
			}
			
		}
		else if(n%3==2)cout<<a + 1<<" "<<a + 2<<" "<<a - 1<<endl;
	}


	return 0;
}	