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
int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)return 0;
        dfs(root);
        return diameter;
    }
    private:
    int dfs(TreeNode* root){
        if (root == nullptr) return 0;

        int height = 0;
        int ldepth = dfs(root->left);
        int rdepth = dfs(root->right);
        diameter=  max(diameter, ldepth+rdepth);
        height = 1+max(ldepth,rdepth);
        return height;
    }

};