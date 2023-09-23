#include<iostream>
#include<stack>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;}
    void push(int x){
        if(top==n-1){
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"array is empty ";
            return;
        }
        top--;

    }
    int top(){
        if(top==-1){
            cout<<"NO emlemet in stack";
            return -1;
        }
        return arr[top];  
    }
    bool empty(){
        return top==-1;
    }

};
int main(){
   stack st;
   st.push(1);
   st.push(3);
   st.push(4);
   st.push(5);
   cout<<st.top();
 




}
 
