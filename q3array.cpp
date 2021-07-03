#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int arr2[n];
int mid=n/2;
for(int i=0;i<n;i++){
    if(i%2==0)
    arr2[i]=arr[i];
    else
    arr2[i]=arr[i+mid];
}

for(int i=0;i<j;i++){
    cout<<arr[i]<<" ";
}
}