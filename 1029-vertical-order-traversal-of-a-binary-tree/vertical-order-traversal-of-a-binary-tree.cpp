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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;

        if (root == nullptr) return {};

        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            TreeNode* node = curr.first;
            int row = curr.second.first;
            int col = curr.second.second;

            if (node->left != nullptr) {
                q.push({node->left, {row + 1, col - 1}});
            }

            if (node->right != nullptr) {
                q.push({node->right, {row + 1, col + 1}});
            }

            nodes[col][row].push_back(node->val);
        }

        vector<vector<int>> result;

        for (auto& [col, rows] : nodes) {
            vector<int> colvalues;

            for (auto& [row, values] : rows) {
                sort(values.begin(), values.end());

                for (auto& value : values) {
                    colvalues.push_back(value);
                }
            }

            result.push_back(colvalues);
        }

        return result;
    }
};