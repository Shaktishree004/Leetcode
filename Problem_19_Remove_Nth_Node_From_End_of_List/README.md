# 19. Remove Nth Node From End of List

## Problem Statement
Given the head of a linked list, remove the nth node from the end of the list and return its head.

### Example
- Input: `head = [1,2,3,4,5]`, `n = 2`
- Output: `[1,2,3,5]`

## Approach
We use a two-pointer technique with a dummy node.

1. Place a dummy node before the head.
2. Move one pointer `n` steps ahead.
3. Move both pointers together until the first pointer reaches the end.
4. The second pointer will now be just before the node that needs to be removed.
5. Adjust the links to skip that node.

## Why this works
The first pointer is moved ahead by `n` nodes, so when it reaches the end, the second pointer is exactly at the node before the target. This avoids needing a length calculation and keeps the solution linear.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(1)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
