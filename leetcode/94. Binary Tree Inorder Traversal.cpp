//https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

class Solution {
public:
void recurinorder(TreeNode* root,vector<int>&A){
    if(!root) return;
    recurinorder(root->left,A);
    A.push_back(root->val);
    recurinorder(root->right,A);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        recurinorder(root,ans);
        return ans;
    }
};
