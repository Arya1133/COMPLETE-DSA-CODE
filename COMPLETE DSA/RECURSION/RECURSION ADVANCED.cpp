#include<iostream>
using namespace std;
/*void reverse(string s){
    if(s.length()==0){
        return ;
    }
    string ros= s.substr(1);
    reverse(ros);
    cout<<s[0];
}
void replace(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2));
        
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }
}
void towerofhanoi(int n,string src,string helper,string dest){
    if(n==0){
        return ;

    }
    towerofhanoi(n-1,src,dest,helper);
    cout<<src<<dest;
    towerofhanoi(n-1,helper,dest,src);
}

string removedup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans =removedup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;

}
string moveallX(string s){
    if(s.length()==0){
        return"";
    }
    char ch=s[0];
    string ans=moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}

void subseq(string s,string ans){
    if(s.length()==0){
       cout<<ans<<endl;
       return  ;
    }
    char ch=s[0];
    string ros =s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros+ans+ch);
    subseq(ros,ans,to_string(code));
}*/
void
int main(){
    /*replace("piefse");
    towerofhanoi(4,'A','B','C');
    cout<<removedup("aaaaahunhcdj");
    cout<<moveallX("axxbdxcefxhix");
    subseq("ABC","");
    cout<<endl;
    subseq("AB"," ");*/


}