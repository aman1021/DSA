#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class TreeNode{
   public:
   int data;
   vector<TreeNode*> children;
   
   TreeNode(int data){
       this -> data = data;
   }
};

//Taking input levelwise 
TreeNode* takeinput(){
        int rootData;
        cout << "Enter the root data" << endl;
        cin>> rootData;
        TreeNode* root = new TreeNode(rootData);

        queue<TreeNode*> pendingNodes;
        pendingNodes.push(root);

        while(pendingNodes.size()!=0){
           TreeNode* front = pendingNodes.front();
           pendingNodes.pop();
           cout<< "Enter number of children of " << front -> data <<endl;
           int numChild;
           cin>> numChild;
           for(int i = 0; i< numChild; i++){
               int childData;
               cout << "Enter " << i << " th child of " << front -> data <<endl;
               cin>> childData;
               TreeNode* child = new TreeNode(childData);
               front -> children.push_back(child);
               pendingNodes.push(child);
           }
        }
        return root;
}

vector<int> v;
int sumofnodes(TreeNode* root){

    v.push_back(root->data);
    for(int i=0; i< root->children.size() ; i++){
        sumofnodes(root->children[i]);
    }

    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum = sum + v[i];
    }
    return sum;
}

int main(){
    TreeNode* root = takeinput();
    int sumofall = sumofnodes(root);
    cout << "Sum of all nodes " << sumofall << endl;
}