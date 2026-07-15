class Solution {
public:
    TreeNode* solve(TreeNode* root, int val)
    {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        if(root->val<val) return solve(root->right,val);
        else return solve(root->left,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return solve(root,val);
    }
};
