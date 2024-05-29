#include<bits/stdc++.h>
using namespace std;
int n,k,p,mini=INT_MAX,a;
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a;
    if(a==mini)p=1;
    if(a<mini)mini=a,k=i,p=0;
}
if(p)cout<<"Still Rozdil";
else cout<<k;
}