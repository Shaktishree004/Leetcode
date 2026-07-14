#include <cstddef>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) {
            return nullptr;
        }

        Node* leftmost = root;
        while (leftmost->left != nullptr) {
            Node* current = leftmost;
            while (current != nullptr) {
                current->left->next = current->right;
                if (current->next != nullptr) {
                    current->right->next = current->next->left;
                }
                current = current->next;
            }
            leftmost = leftmost->left;
        }

        return root;
    }
};
