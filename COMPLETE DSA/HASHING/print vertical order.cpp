 struct  node{
    int key;
    node*left,*right;
 };
 node *newnode(int key){
    node * node=new node;
    node->key =key;
    node->left=node->right=null;
    return node;
 }
 void getverticalorder(node* root,int hdis,map<int,vi> &m){
    if()
 }
  signed main(){
    node* root=newnode(10);
    root->left =newnode(7);
    root->right=newnode(4);
    root->left->left= newnode(3);
    root->left->right=newnode(11);
    root->right->left=newnode(14);
    root->right->right=newnode(6);
    map<int,vector<int>> m;
    int hdis =0;
    getverticalorder(root,hdis,m);
      }