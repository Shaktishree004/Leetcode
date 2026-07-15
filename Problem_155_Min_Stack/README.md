# Problem 155: Min Stack

## Problem Statement

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:
- `push(val)`
- `pop()`
- `top()`
- `getMin()`

### Example

Input:
- `push(-2)`, `push(0)`, `push(-3)`, `getMin()`, `pop()`, `top()`, `getMin()`

Output:
- `-3`, `0`, `-2`

## Approach

Use two stacks.

- One stack stores the actual values.
- The second stack stores the minimum value seen so far for each corresponding push.

When pushing a value, push it onto the main stack and also push the new minimum onto the min stack. When popping, pop from both stacks. The minimum is always available at the top of the min stack.

## Why This Works

The min stack stores the minimum value up to each position. Because each push and pop updates both stacks consistently, the minimum at any time is always the top element of the min stack.

## Complexity Analysis

- Time Complexity: $O(1)$ for each operation
- Space Complexity: $O(n)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
