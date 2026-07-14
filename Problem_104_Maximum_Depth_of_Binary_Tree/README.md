# Problem 104: Maximum Depth of Binary Tree

## Problem Statement

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

### Example

Input:
- `root = [3,9,20,null,null,15,7]`

Output:
- `3`

## Approach

Use a recursive depth-first traversal.

For each node:
1. If the node is `null`, return `0`.
2. Compute the maximum depth of the left subtree.
3. Compute the maximum depth of the right subtree.
4. Return `1 + max(leftDepth, rightDepth)`.

This finds the longest path from the root to any leaf.

## Why This Works

The depth of a node is one more than the deeper of its two child subtrees. By combining the depths of the left and right branches recursively, we obtain the maximum depth of the whole tree.

## Complexity Analysis

- Time Complexity: $O(n)$, where $n$ is the number of nodes.
- Space Complexity: $O(h)$, where $h$ is the height of the tree, due to recursion.

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
