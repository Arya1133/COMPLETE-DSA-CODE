 #include<bits/stdc++.h>
 using namespace std;
 int32_t main(){
    string s="na";
    string t="apna collegena";
    int S =s.size(), T=t.size();
    for(int i=0;i<T-S+1;i++){
        if(t.substr(i,S)== s){
            cout<<i;
        }
    }
 }//TIME COMPLEXITY ST