   
   //We will get if the binary tree is height balaned or not.
    int height(TreeNode* root, bool& flag){
        if(root==NULL){
            return 0;
        }
        
        int lh = height(root->left, flag);
        int rh = height(root->right, flag);
        
        if(abs(lh-rh)>1){
            flag = false;
        }
        
        return 1 + max(lh, rh);
    }
    
    bool isBalanced(TreeNode* root) {
        bool flag = true;
        int h = height(root, flag);
        return flag;
    }