/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> vr;
    int i=0;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        vr.push_back(root->val);
        inorder(root->right);   
    }
    void check(TreeNode* root){
        if(root==NULL)
            return;
        check(root->left);
        if(vr[i]!=root->val)
            swap(vr[i],root->val);
        i++;
        check(root->right);
    }
    
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(vr.begin(), vr.end());
        check(root);
    }
};