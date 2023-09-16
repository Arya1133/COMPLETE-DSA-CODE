#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int xorsum =0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
        
    }
    int setbit=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum >>1;
    }
  //  return xorsum;
    for(int i=0;i<n;i++){
        if(setbit(arr[i],pos-1))
    }
}
int main(){
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7);
}