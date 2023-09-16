#include<iostream>
using namespace std;
// complexity max(A,N)
void countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] =arr[i];
    }
}
int main(){
    int arr[]={1,2,3,40,5,6,7,6,53};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<"";
    }
}
