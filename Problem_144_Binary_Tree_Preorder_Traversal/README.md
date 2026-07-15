# Problem 144: Binary Tree Preorder Traversal

## Problem Statement

Given the root of a binary tree, return the preorder traversal of its nodes' values.

Preorder traversal visits the node, then the left subtree, then the right subtree.

### Example

Input:
- `root = [1,null,2,3]`

Output:
- `[1,2,3]`

## Approach

Use a recursive DFS approach.

For each node:
1. Visit the current node value.
2. Recursively traverse the left subtree.
3. Recursively traverse the right subtree.

This directly matches the preorder definition.

## Why This Works

The recursion follows the preorder order exactly: current node first, then left child, then right child. By applying the same rule recursively to each subtree, the entire traversal is produced in the correct sequence.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(h)$, where $h$ is the tree height

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
