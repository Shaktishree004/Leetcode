# Problem 206: Reverse Linked List

## Problem Statement

Given the head of a singly linked list, reverse the list, and return the reversed list.

### Example

Input:
- `head = [1,2,3,4,5]`

Output:
- `[5,4,3,2,1]`

## Approach

Use an iterative pointer reversal.

- Initialize `prev` as `None` and `current` as `head`.
- For each node, store `next_node = current.next`.
- Point `current.next` to `prev`.
- Move `prev` to `current` and `current` to `next_node`.
- Continue until the list ends.

Return `prev` as the new head.

## Why This Works

Reversing the direction of each `next` pointer flips the list. Iterating through the original list and updating pointers in place ensures the full list is reversed in one pass.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
