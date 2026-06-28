class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
    void inorder(TreeNode* root, vector<int> &res)
    {
        if(root!=NULL){
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);}
    }
};
