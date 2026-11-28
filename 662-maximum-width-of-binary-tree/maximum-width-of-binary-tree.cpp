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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        std::queue<std::pair<TreeNode*,unsigned long long >> q;
        q.push({root,0});
        int width =0;
        while(!q.empty()){
            int size = q.size();
            unsigned long long firstindex = 0;
            unsigned long long lastindex = 0;
            for(int i =0;i<size;i++){
                auto curr = q.front();
                unsigned long long index = curr.second;
                q.pop();
                if(i==0)firstindex = index;
                if(i == size-1)lastindex = index;
                if(curr.first->left!=nullptr){
                    q.push({curr.first->left,2*index});
                }
                if(curr.first->right!=nullptr){
                    q.push({curr.first->right,2*index+1});
                }
            }
            width = max(width, (int)(lastindex-firstindex+1));
        } 
        return (int)width ;
    }
};