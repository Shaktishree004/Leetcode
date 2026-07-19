# Problem 622: Design Circular Queue

## Problem Statement

Design your implementation of the circular queue.

The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle.

Implement the `MyCircularQueue` class:
- `MyCircularQueue(k)` initializes the queue with a maximum size of `k`
- `front()` gets the front item from the queue. If the queue is empty, return `-1`
- `rear()` gets the last item from the queue. If the queue is empty, return `-1`
- `enQueue(value)` inserts an element into the circular queue. Return `true` if the operation is successful
- `deQueue()` deletes an element from the circular queue. Return `true` if the operation is successful
- `isEmpty()` checks whether the queue is empty
- `isFull()` checks whether the queue is full

### Example

Input:
- `MyCircularQueue(3)`
- `enQueue(1)`, `enQueue(2)`, `enQueue(3)`, `enQueue(4)`
- `rear()`, `isFull()`, `deQueue()`, `enQueue(4)`, `rear()`

Output:
- `3`, `true`, `true`, `true`, `4`

## Approach

Use an array with head and tail indices plus a `count` field.

- `head` points to the front element.
- `tail` points to the next insertion position.
- `count` tracks how many elements are currently stored.
- When the queue is full, `count == capacity`.

This allows `enQueue`, `deQueue`, `front`, and `rear` to run in $O(1)$ time.

## Why This Works

The circular logic is handled by wrapping indices with modulo arithmetic. Because the queue stores the number of current elements, the implementation can distinguish between empty and full states without ambiguity.

## Complexity Analysis

- Time Complexity: $O(1)$ for each operation
- Space Complexity: $O(k)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
