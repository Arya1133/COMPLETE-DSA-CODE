#include<iostream>
using namespace std;
//bool ispowerof2(int n){
  //  return (n && !(n & n-1));

//}
/*int numberofones(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}*/
// subset 
void subsets(int arr[], int n){
    for(int i=0;i<(1<<n); i++){
        for(int j=0;j<n;j++){
            if(i &&(1<<j)){
            cout<<arr[j]<<"";
        }}cout<<endl;
    }
    
}
int main(){
    //cout<<ispowerof2(16);
    //cout<<numberofones(19);
    int arr[4]={1,2,3,4};
    subsets(arr,4);
}