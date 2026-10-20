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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL){
            return {};
        }
        vector<int> leftTree=inorderTraversal(root->left);
        for(int x:leftTree){
            v.push_back(x);
        }

        v.push_back(root->val);

        vector<int> rightTree=inorderTraversal(root->right);
        for(int x:rightTree){
            v.push_back(x);
        }
        return v;
    }
};