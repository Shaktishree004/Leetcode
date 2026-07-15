# Problem 141: Linked List Cycle

## Problem Statement

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if some node in the list can be reached again by continuously following the `next` pointer.

### Example

Input:
- `head = [3,2,0,-4]`, with `pos = 1`

Output:
- `true`

## Approach

Use the classic two-pointer technique.

- Maintain a slow pointer that moves one step at a time.
- Maintain a fast pointer that moves two steps at a time.
- If the fast pointer ever reaches the end, there is no cycle.
- If the fast pointer catches up to the slow pointer, there is a cycle.

## Why This Works

If a cycle exists, the faster pointer will eventually lap the slower pointer. If there is no cycle, the fast pointer will reach the end of the list. This guarantees a correct answer in linear time.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
