# Problem 101: Symmetric Tree

## Problem Statement

Given the root of a binary tree, check whether it is a mirror of itself along the center.

A binary tree is symmetric if the left subtree is a mirror reflection of the right subtree.

### Example

Input:
- `root = [1,2,2,3,4,4,3]`

Output:
- `true`

## Approach

Use a recursive helper function that compares two nodes at a time.

For each pair of nodes:
1. If both nodes are `null`, they match.
2. If one node is `null` and the other is not, the tree is not symmetric.
3. If their values are different, the tree is not symmetric.
4. Otherwise, recursively check:
   - the left child of the first node against the right child of the second node
   - the right child of the first node against the left child of the second node

This checks whether the tree is a mirror image around its center.

## Why This Works

The recursion compares the tree in mirrored pairs. If every corresponding pair of nodes matches in value and structure, then the entire tree is symmetric. Any mismatch causes the function to return `false` immediately.

## Complexity Analysis

- Time Complexity: $O(n)$, where $n$ is the number of nodes in the tree.
- Space Complexity: $O(h)$, where $h$ is the height of the tree, due to recursion.

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
