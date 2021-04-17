#include<bits/stdc++.h>
using namespace std;
int main(){ long long  int n,sum=0;cin>>n;int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
cout<<((*max_element(a,a+n))*n)-sum;}