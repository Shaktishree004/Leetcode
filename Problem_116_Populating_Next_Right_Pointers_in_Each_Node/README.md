# Problem 116: Populating Next Right Pointers in Each Node

## Problem Statement

You are given a perfect binary tree where all leaves are at the same level, and every parent has two children. Populate each `next` pointer to point to its next right node. If there is no next right node, the `next` pointer should be set to `null`.

Initially, all `next` pointers are set to `null`.

### Example

Input:
- `root = [1,2,3,4,5,6,7]`

Output:
- The tree is modified so that `1.next = 2`, `2.next = 3`, etc.

## Approach

Use a level-by-level traversal with the existing `next` pointers.

For each node at the current level:
1. Connect its left child to its right child.
2. If the node has a `next` pointer, connect its right child to the left child of the next node.
3. Move to the next node in the level until the level is complete.

This works efficiently because the tree is perfect and the next pointers allow us to traverse level by level without extra space.

## Why This Works

Each node's left and right children are connected to the corresponding children of the adjacent node at the same level. Since the tree is perfect, the links can be established in place using the existing `next` pointers, covering the whole level in linear time.

## Complexity Analysis

- Time Complexity: $O(n)$, where $n$ is the number of nodes.
- Space Complexity: $O(1)$ extra space.

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
