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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> v;
        vector<vector<int>> req;
        queue<TreeNode*> q;
        if(root==NULL) return {};
        q.push(root);
        // v.push_back(root->data);
        // req.push_back(v);
        // v.clear();
        while(!q.empty()){
            
           
            int levelSize=q.size();
            for(int i=0;i<levelSize;i++){
                TreeNode* curr=q.front();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                v.push_back(q.front()->val);
                q.pop();
            }
            req.push_back(v);
            v.clear();
        }
        return req;
    }
};