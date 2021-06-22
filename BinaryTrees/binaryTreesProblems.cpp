#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>
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

          cout<< "Enter the right child of "<<front->data<<endl;
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
//PRINT A BINARY TREE with Recursion
void printTree(BtNodes* root){
    if(root == NULL){
        return;
    }
    cout << root->data << ":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"L"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
//print tree without RECURSION and LEVEL WISE. using queue
void print(BtNodes* root){
    if(root == NULL){
        return;
    }
    queue<BtNodes*> pendings;
    pendings.push(root);
    while(pendings.size()!=0){
        BtNodes* front = pendings.front();
        pendings.pop();
        cout<< front->data << ":";
        if(front->left!=NULL){
            cout<<"L"<<front->left->data;
            pendings.push(front->left);
        }
        if(front->right!=NULL){
            cout<<"R"<<front->right->data;
            pendings.push(front->right);
        }
        cout<<endl;
    }
}
//INORDER TRAVERSAL
void inorder(BtNodes* root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<< root->data << " ";
    inorder(root->right);
}

//PREORDER TRAVERSAL
void preorder(BtNodes* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root->left);
    preorder(root->right);
}
//POSTORDER TRAVERSAL
void postorder(BtNodes * root){
    if(root == NULL){
         return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" ";
}
//DIAMETER OF BINARY TREE.
pair<int, int> heightDiameter(BtNodes* root){
    if(root == NULL){
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int, int> leftAns = heightDiameter(root->left);
    pair<int, int> rightAns = heightDiameter(root->right);
    
    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = rightAns.first;

    int height = 1 + max(lh, rh);
    int diameter = max(lh+rh, max(rd, ld));
    pair<int, int> p;
    p.first = height;
    p.second = diameter;

    return p;
}

int main(){
    BtNodes* root = takeinput();
    //int s;
    //int H = height(root);
   /* cout << "Number to find "<< endl;
    cin>>s;
    bool yesorno = isPresent(root,s);*/
    //cout<< H<< endl;
    //print(root);
    //postorder(root);
    pair<int, int> p = heightDiameter(root);
    cout<<"HEIGHT:" << p.first<< endl;
    cout<<"DIAMETER:" << p.second<< endl;
}