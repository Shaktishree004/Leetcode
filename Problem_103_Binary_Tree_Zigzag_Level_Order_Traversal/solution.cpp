#include <deque>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }

        deque<TreeNode*> queue;
        queue.push_back(root);
        bool leftToRight = true;

        while (!queue.empty()) {
            int size = queue.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = queue.front();
                queue.pop_front();
                level.push_back(node->val);

                if (node->left != nullptr) {
                    queue.push_back(node->left);
                }
                if (node->right != nullptr) {
                    queue.push_back(node->right);
                }
            }

            if (!leftToRight) {
                reverse(level.begin(), level.end());
            }
            result.push_back(level);
            leftToRight = !leftToRight;
        }

        return result;
    }
};
