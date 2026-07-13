# 98. Validate Binary Search Tree

## Problem Statement
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:
- the left subtree of a node contains only nodes with values less than the node's value,
- the right subtree of a node contains only nodes with values greater than the node's value,
- both subtrees must also be valid BSTs.

### Example
- Input: `root = [2,1,3]`
- Output: `true`

## Approach
We use an inorder traversal and check that the values are strictly increasing.

If the traversal is strictly increasing, then the tree is a valid BST. We can do this iteratively with a stack.

## Why this works
For a binary search tree, inorder traversal visits nodes in sorted order. If at any point a value is less than or equal to the previous value, the tree violates BST rules.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(h)` where `h` is the tree height

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
