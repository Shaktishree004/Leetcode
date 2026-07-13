# 99. Recover Binary Search Tree

## Problem Statement
You are given the root of a binary search tree (BST), where exactly two nodes of the tree were swapped by mistake.

Recover the BST by swapping the two nodes back so that it becomes a valid BST again.

### Example
- Input: `root = [1,3,null,null,2]`
- Output: `[1,2,null,null,3]`

## Approach
We perform an inorder traversal and track the previous node.

When we find a node whose value is less than the previous node's value, we mark the first and second misplaced nodes. After the traversal, we swap their values.

## Why this works
In a valid BST, inorder traversal produces strictly increasing values. If two nodes are swapped, the traversal will contain exactly one inversion at the first misplaced node and another at the second misplaced node. Recording these two positions lets us recover the tree correctly.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(h)` where `h` is the tree height

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
