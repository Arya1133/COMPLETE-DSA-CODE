 #include<iostream>
 using namespace std;
 bool isasfe(int ** arr,int x,int y,int n){
    if(x<n&& y<n&& arr[x][y]==1){
        return true;}
    return false;
 }
 bool rainmaze(int ** arr , int x, int y, int n,int **solarr){
    if(x==n-1 && y==n-1 ){
        solarr[x][y]=1;
        return true;
    }
    if(isasfe(arr,x,y,n)){
        solarr[x][y]=1;
        if(rainmaze(arr,x+1,y,n,solarr)){
              return true;
        }
        solarr[x][y] =0;// backtrackking
        return false;
    }
int main(){
    int n;
    cin>>n;
    int ** arr= new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int )
        
    }

}
 