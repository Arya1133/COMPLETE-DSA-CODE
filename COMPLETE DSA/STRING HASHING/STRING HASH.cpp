#include "bits/stdc++.h"
using namespace std;
int p=31;
const int N=1e5+3, m= 1e9+7;
vector<long long>powers(N);
int32_t main(){
    vector<string> strings={"aa","ab","aa"};
    /*sort(strings.begin(),strings.end());
    int dist=0;
    for(int i=0;i<strings.size();i++){
        if(i==0 or strings [i]!=strings[i-1]){
            dist++;
        }
    } 
    cout<<dist; 
    TIME COMPLEXITY NMLOG N HOTI HAI*/
    powers[0]=1;
    for(int i=1;i<N;i++){
        powers[i]=(powers[i-1]*p)%m;
    }
    veector<long long> hashes;
    for(auto  w:strings){
        hashes.push_back(calculate_hash(w));

    }
    sort(hashes.begin(),hashes.end()){
        int dist=0;
        for(int i=0;i<hashes.size();i++){
            if(i==0 or hashes[i]! =hashes[i-1])
                 dist++;
        }
        cout<<dist; 
    }
     

}