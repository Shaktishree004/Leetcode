# 2. Add Two Numbers

## Problem Statement
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

The digits are stored in reverse order, so the first node contains the least significant digit.

### Example
- Input: `l1 = [2,4,3]`, `l2 = [5,6,4]`
- Output: `[7,0,8]`
- Explanation: `342 + 465 = 807`

## Approach
We simulate the addition exactly like addition on paper.

We keep a carry value and iterate through both linked lists until both are exhausted. At each step:
1. Add the current digits and the carry.
2. Create a new node with the resulting digit.
3. Update the carry for the next position.
4. Move to the next nodes in both lists if they exist.

After the loop, if there is still a carry, we attach one more node.

## Why this works
This follows the standard column-wise addition process. Each node corresponds to one digit place, and the carry is propagated from one position to the next. Because we process the linked lists from least significant to most significant digit, the result is built in the correct order.

## Complexity Analysis
- Time: `O(n + m)`
- Space: `O(max(n, m))`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
