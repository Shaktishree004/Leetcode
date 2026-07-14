# Problem 103: Binary Tree Zigzag Level Order Traversal

## Problem Statement

Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

### Example

Input:
- `root = [3,9,20,null,null,15,7]`

Output:
- `[[3],[20,9],[15,7]]`

## Approach

Use a breadth-first traversal with a queue.

For each level:
1. Collect the values of the current level.
2. If the current level should be traversed from right to left, reverse the collected list.
3. Append the level to the answer and toggle the direction for the next level.

This preserves the required zigzag order while still using the efficient queue-based traversal.

## Why This Works

Each level is processed independently in a queue-based traversal. By flipping the order every time we move to the next level, the final sequence matches the zigzag pattern exactly.

## Complexity Analysis

- Time Complexity: $O(n)$, where $n$ is the number of nodes.
- Space Complexity: $O(n)$ in the worst case for the queue and output structure.

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
