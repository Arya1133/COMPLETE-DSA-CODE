#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node*next;
   node(int val){
      data=val;
      next=NULL;
   }
};
bool search(node* head , int key){
   node*temp=head;
   while(temp!=NULL){
      if(temp->data==key){
         return true;
      }
      temp=temp->next;
   }
   return false;
   }
void insertathead(node* &head,int val){
   node*n =new node(val);
   n->next=head;
   head=n;
}
void insertattail(node*&head,int val){

   node*n=new node(val);
   if(head==NULL){
      head=n;
      return;
   }
   node*temp=head;
   while(temp->next!=NULL){
      temp=temp->next;
   }
   temp->next=n;
}
void display(node*head){
   node*temp=head;
   while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
   }
   cout<<endl;
}
int main(){
   node*head=NULL;
     insertattail(head,2);
     insertattail(head,3);
     insertattail(head,4);
     insertattail(head,5);
     insertattail(head,6);
     insertattail(head,7);
     insertattail(head,8);
     display(head);
     insertathead(head,19);
     display(head);
     cout<<search(head,5);



}