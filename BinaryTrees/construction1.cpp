#include<iostream>
using namespace std;
class bnodes{
    public:
    int data;
    bnodes* left;
    bnodes* right;

    bnodes(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
//int search(int a[], int s, int e, int value);
//searching the root node element.
int search(int a[], int s, int e, int value){
     int i;
     for(i=s; i<e; i++){
         if(a[i] == value){
             return i;
         }
     }
     return i;
 }
bnodes* buildTree(int in[], int pre[], int instrt, int inEnd){
              static int preindex = 0;
              if(instrt > inEnd){
                  return NULL;
              }

              bnodes* tree = new bnodes(pre[preindex++]);
              if(instrt == inEnd){
                  return tree;
              }

              int inIndex = search(in , instrt, inEnd, tree->data);

              tree -> left = buildTree(in, pre, instrt, inIndex-1);
              tree -> right = buildTree(in, pre, inIndex+1, inEnd);

              return tree;
 }

  //checking the preorder to see if we get the right tree.
 void preorder(bnodes* root){
     if(root == NULL){
         return;
     }
     cout << root->data <<" ";
     preorder(root->left);
     preorder(root->right);
 }

 int main(){
     int in[] = {4,2,5,1,6,3,7};
     int pre[] = {1,2,4,5,3,6,7};
     int len = sizeof(in)/sizeof(in[0]);
     bnodes* root = buildTree(in, pre, 0, len-1);
     preorder(root);
 }