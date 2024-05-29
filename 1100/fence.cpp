#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;

	vector<int>arr(n);

	for(int &x:arr)cin>>x;

	deque<int>dq;

	//step 1 process k integers
	int sum = 0, curr_sum = 0,idx=-1;
	for(int i=0;i<k;i++){
		dq.push_back(arr[i]);
		sum += arr[i];
	}

	idx = 0;

	curr_sum = sum;

	int i = k;
	while(i<n){
		int front_element = dq.front();
		dq.pop_front();

		curr_sum -= front_element;

		curr_sum += arr[i];

		dq.push_back(arr[i]);

		if(curr_sum < sum){
			sum = curr_sum;
			idx = i - k + 1;
		}

		i++;
	}

	cout<<idx + 1<<endl;


	return 0;
}