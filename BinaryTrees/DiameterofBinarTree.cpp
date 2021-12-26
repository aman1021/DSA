/* The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes.
 This path may or may not pass through the root node*/

int height(Node* root, int& d){
        if(root == NULL){
            return 0;
        }
        
        int lh = height(root->left, d);
        int rh = height(root->right, d);
        
        if(d< 1+lh+rh){
            d = 1+ lh + rh;
        }
        
        return 1+max(lh,rh);
}
    
int diameter(Node* root) {
         int d =0;
         int h = height(root, d);
         return d;
}

