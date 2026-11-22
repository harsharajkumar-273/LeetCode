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
        std::vector<vector<int>> result ;
        if(root == nullptr) return result;
        std::queue<TreeNode*> q;
        TreeNode * node = root;
        q.push(node);
        while(!q.empty()){
            vector<int > indi;
            int size = q.size();
            for(int i =0;i<size;i++){
                TreeNode* x = q.front();
                indi.push_back(x->val);
                q.pop();
               if(x->left!=nullptr)q.push(x->left);
               if(x->right!=nullptr)q.push(x->right);
            }
            result.push_back(indi);
        }
        return result;
    }
};