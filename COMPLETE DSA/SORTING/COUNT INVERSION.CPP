#include"bits/stdc++.h"
using namespace std;
long long mergesort(int arr[],int l, int r)
{   long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
    }

    int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
}