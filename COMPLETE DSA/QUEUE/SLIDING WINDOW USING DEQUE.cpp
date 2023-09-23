#include<bits/stdc++.h>
//#include<deque>
using namespace std;
/*int main(){
    deque <int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);
    for(auto i:dq){
        cout<<i<<"";
    }
    dq.pop_back();
    dq.pop_front();
    for(auto i:dq){
        cout<<i<<"";
    }
 
}*/
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int k=3;
    for(int i=0;i<=n-k;i++){
        max=arr[i];
        for(j=1;j<k;j++){
            if(arr[i+j]>max)
            max=arr[i+j];
        }
        cout<<max;

    }
}
