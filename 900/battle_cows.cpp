#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		//k is 1 based
		int n,k;
		cin>>n>>k;

		vector<ll>arr;

		for(int i=0;i<n;i++){
			ll x;
			cin>>x;

			arr.push_back(x);
		}

		int pos = -1;

		for(int i=0;i<n;i++){
			if(arr[i] > arr[k-1] and i != k-1){
				pos = i;
				break;
			}
		}


		//meaning kth cow is the largest cow
		if(pos == -1){
			cout<<n-1<<endl;
		}

		else if(pos > k-1){
			if(pos - 1 >=0)cout<<pos - 1<<endl;
			else cout<<0<<endl;
		}

		else{
			int op1 = 0, op2 = 0;

			if(pos - 1 >=0){
				op1 = pos - 1;
			}

			int j = pos +1;

			while(j<n and arr[j] < arr[k-1]){
				j++;
			}

			op2 = j-1 - pos;

			if(pos >0){
				op2 +=1;
			}

			cout<<max(op1,op2)<<endl;
		}

	}


	return 0;
}