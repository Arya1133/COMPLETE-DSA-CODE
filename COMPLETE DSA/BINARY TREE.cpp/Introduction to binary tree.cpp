#include "bits/stdc++.h"
using namespace std;
struct  node{
    int data;
    struct node*left;
    struct node*right;
       node(int val){
        data=val;
        left=NULL;
        right=NULL;
       }
};
void preorder(struct node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}
int main(){
    struct  node * root=new node(5);
    root->left=new node(4);
    root->right=new node(8);
    preorder(root);
    inorder(root);

}