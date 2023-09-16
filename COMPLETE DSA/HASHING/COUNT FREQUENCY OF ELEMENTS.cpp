#include<iostream>
using namespace std;
signed main(){
    int n;
    cin>> n;
    vi a(n);
    for(int i=0; i<n; i++)
    cin>> a[i];
    map<int,int> freq;
    rep(i,0,n){
        freq[a[i]]++;
    }
    map<int ,int>:: iterator it;
    for(it=freq.begin(); it!=freq.end();it++){
        cout<<it->ff<<" "<<it->ss<<endl;

    }

}
