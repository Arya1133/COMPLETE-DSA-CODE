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
void deleteathead(node*&head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node*&head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);s
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
}
int main(){
   node*head=NULL;
     insertattail(head,2);
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
     
     //deletion(head,3);
    // display(head); }