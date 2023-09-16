#include<iostream>
using namespace std;
// O(n)
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfsort()(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;

        }

    }
}
int main(){
    int arr[]={60,30,20};
    dnfsort(arr,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}