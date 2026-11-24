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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        std::vector<vector<int>> ans;
        if(root == nullptr) return ans;
        std::queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            std::vector<int> indi;
            for(int i =0;i<size;i++){
                TreeNode* curr = q.front();
                indi.push_back(curr->val);
                q.pop();
                if(curr->left!=nullptr)q.push(curr->left);
                if(curr->right!=nullptr)q.push(curr->right);

            }
            
            if(level%2 == 0){
                ans.push_back(indi);
            }
            else{
                std::reverse(indi.begin(),indi.end());
                ans.push_back(indi);
            }
            level++;
        }
        return ans;
    }
};