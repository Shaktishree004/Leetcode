# Problem 145: Binary Tree Postorder Traversal

## Problem Statement

Given the root of a binary tree, return the postorder traversal of its nodes' values.

Postorder traversal visits the left subtree, then the right subtree, then the node.

### Example

Input:
- `root = [1,null,2,3]`

Output:
- `[3,2,1]`

## Approach

Use a recursive DFS approach.

For each node:
1. Recursively traverse the left subtree.
2. Recursively traverse the right subtree.
3. Visit the current node value.

This directly matches the postorder definition.

## Why This Works

The recursion follows the postorder order exactly: left child first, then right child, then current node. By applying the same rule recursively to each subtree, the complete traversal is produced in the correct order.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(h)$, where $h$ is the tree height

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
