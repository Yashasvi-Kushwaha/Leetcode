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
    TreeNode* consTree(vector<int> &v,int low,int high){
        if(low>high){
            return nullptr;
        }
        int mid=low+(high-low)/2;
        TreeNode* root= new TreeNode(v[mid]);
        TreeNode* lftST=consTree(v,low,mid-1);
        TreeNode* rgtST=consTree(v,mid+1,high);
        root->left=lftST;
        root->right=rgtST;

        return root;
    }
    void inorderTraversal(TreeNode* root,vector<int> &v){
       
        if(root==NULL) return;
        inorderTraversal(root->left,v);
        v.push_back(root->val);
        inorderTraversal(root->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v={};
        inorderTraversal(root,v);
        TreeNode* req=consTree(v,0,v.size()-1);
        return req;
    }
};