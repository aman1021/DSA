#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class BtNodes{
    public:
    int data;
    BtNodes* left;
    BtNodes* right;

    BtNodes(int data){
        this->data = data;
        left = NULL;
        right =NULL;
    }
};

BtNodes* takeinput(){
    int rootData;
    cout<< "Enter root data" << endl;
    cin>> rootData;
    if(rootData == -1){
        return NULL;
    }

    BtNodes* root = new BtNodes(rootData);
    queue<BtNodes*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
          BtNodes* front = pendingNodes.front();
          pendingNodes.pop();
          cout<< "Enter the left child of "<< front->data<<endl;
          int leftchild;
          cin>>leftchild;
          if(leftchild!=-1){
              BtNodes* child = new BtNodes(leftchild);
              front->left = child;
              pendingNodes.push(child);
          }

          cout<< "Enter the lright child of "<< front->data<<endl;
          int rightchild;
          cin>>rightchild;
          if(rightchild!=-1){
              BtNodes* child = new BtNodes(rightchild);
              front->right = child;
              pendingNodes.push(child);
          }
    }
  return root;
}

//Height of binary tree.
int height(BtNodes* root){
    if(root== NULL){
        return 0;
    }

   int  lh = height(root->left);
   int rh = height(root->right);

   return 1 + max(lh,rh);
}
//to check if a node is present or not.
bool isPresent(BtNodes* root, int k){
    if(root == NULL){
        return false;
    }
    if(k == root->data){
      return 1;
    }
   bool flag1 = isPresent(root->left,k);
   bool flag2 = isPresent(root->right,k);
   if(flag1 == true || flag2 == true){
       return true;
   }
   else{
       return false;
   }
    
}

int main(){
    BtNodes* root = takeinput();
    int s;
    int H = height(root);
   /* cout << "Number to find "<< endl;
    cin>>s;
    bool yesorno = isPresent(root,s);*/
    cout<< H<< endl;
}