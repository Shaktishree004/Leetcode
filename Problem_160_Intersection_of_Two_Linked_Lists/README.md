# Problem 160: Intersection of Two Linked Lists

## Problem Statement

Given the heads of two singly linked lists `headA` and `headB`, return the node at which the two lists intersect. If the lists do not intersect, return `null`.

It is guaranteed that there is no cycle in either list.

### Example

Input:
- `headA = [4,1,8,4,5]`
- `headB = [5,6,1,8,4,5]`

Output:
- `8`

## Approach

Use two pointers traversing both lists.

- Start one pointer at `headA` and one at `headB`.
- Move each pointer forward one node at a time.
- When one pointer reaches the end of its list, redirect it to the head of the other list.
- The second time both pointers traverse the same total length, they will meet at the intersection node or become `null`.

## Why This Works

Both pointers traverse the same combined path length, so they reach the intersection node at the same time if it exists. If there is no intersection, both pointers end at `null`.

## Complexity Analysis

- Time Complexity: $O(n + m)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
