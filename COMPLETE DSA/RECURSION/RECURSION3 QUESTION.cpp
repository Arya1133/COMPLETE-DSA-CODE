#include<iostream>
using namespace std;
/*void permutation(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch= s[i];
        string ros=s.substr(0,i) + s.substr(i+1);
        permutation(ros,ans+ch);
         
         
    }
}int count;
int countpath(int s,int e){
   if(s==e){
    return 1;
}
if(s>e){
    return 0;
}

}

    for(int i=0;i<6;i++){
        count+=countpath(s+i,e);

            }
    return count;
int countpathmaze(int n,int i,int j){
    if(i==n-1&& j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countpathmaze(n,i+1,j)+ countpathmaze(n,i,j+1);
}
int tilingways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingways(n-1)+tilingways(n-2);
}
int friendpairing(int n){
    if(n==0 || n==1|| n==2){
        return n;
    }
    return friendpairing(n-1) + friendpairing(n-2)*(n-1);
}*/
int knapsack(int value[], int wt[],int n,int W){
    if(n==0||   W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}
 

int main(){
    //permutation("ABC","");
    //cout<<countpath(0,4);
    //  cout<<countpathmaze(3,0,0)<<endl;
   // cout<<tilingways(4);}
  // cout<<friendpairing(4);
  int wt[]={10,20,30};
  int value[]={100,200,50};
  int W=50;
    cout<<knapsack(wt,value,3,W);}