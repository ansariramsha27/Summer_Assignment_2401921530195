class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isvalid(root, LONG_MIN, LONG_MAX);
    }
    bool isvalid(TreeNode* root, long min, long max)
    {
        if(root==NULL) return true;
        if(root->val<=min||root->val>=max) return false;
        return isvalid(root->left,min,root->val) && isvalid(root->right,root->val,max);
    }
};
