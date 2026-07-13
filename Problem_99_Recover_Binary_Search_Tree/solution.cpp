#include <cstddef>
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
    void recoverTree(TreeNode* root) {
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        TreeNode* prev = nullptr;
        inorder(root, first, second, prev);
        if (first && second) {
            swap(first->val, second->val);
        }
    }

private:
    void inorder(TreeNode* node, TreeNode*& first, TreeNode*& second, TreeNode*& prev) {
        if (node == nullptr) {
            return;
        }

        inorder(node->left, first, second, prev);
        if (prev != nullptr && node->val < prev->val) {
            if (first == nullptr) {
                first = prev;
            }
            second = node;
        }
        prev = node;
        inorder(node->right, first, second, prev);
    }
};
