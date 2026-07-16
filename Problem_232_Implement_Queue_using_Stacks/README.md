# Problem 232: Implement Queue using Stacks

## Problem Statement

Implement a first in first out (FIFO) queue using only two stacks.

The implemented queue should support the following operations:
- `push(x)` -- Push element x to the back of queue.
- `pop()` -- Removes the element from in front of queue and returns it.
- `peek()` -- Get the front element.
- `empty()` -- Return whether the queue is empty.

### Example

Input:
- `push(1)`, `push(2)`, `peek()`, `pop()`, `empty()`

Output:
- `1`, `1`, `false`

## Approach

Use two stacks: `input_stack` and `output_stack`.

- `push` always adds to `input_stack`.
- `pop` and `peek` move elements from `input_stack` to `output_stack` if needed, so the oldest element is on top.
- `empty` checks both stacks.

This simulates queue behavior using stack operations.

## Why This Works

By transferring elements from `input_stack` to `output_stack`, the queue's FIFO order is restored. The oldest pushed elements become accessible for `pop` and `peek` while preserving constant amortized time per operation.

## Complexity Analysis

- Time Complexity: amortized $O(1)$ per operation
- Space Complexity: $O(n)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
