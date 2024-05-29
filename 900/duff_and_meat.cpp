#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int minima = INT_MAX, total_meat = 0;

	vector<int>meat,price;

	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;

		meat.push_back(x);
		price.push_back(y);
	}

	int total_price = 0;

	int i = 0;

	while(i<n){

		int currPrice = price[i];

		int j = i;
		int temp = 0;

		while(currPrice <= price[j] and j<n){
			temp += meat[j];
			j++;
		}

		total_price += temp * currPrice;

		i = j;

	}

	cout<<total_price<<endl;

	return 0;
}
