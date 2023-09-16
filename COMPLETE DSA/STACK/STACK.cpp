#include<iostream>
using namespace std;
 class stack{
    public:
    int * arr;
    int top;
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"STACK OVERFLOW";
            return;

        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop";
        }
        top--;

        
    }
    int Top(){
        if(top==-1){
            cout<<"no elemet to pop";
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
    st.push(2);
    cout<<st.top();
    st.pop();

 }