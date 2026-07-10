# 11. Container With Most Water

## Problem Statement
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the line `i` are at `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container that holds the most water.

Return the maximum amount of water a container can store.

### Example
- Input: `height = [1,8,6,2,5,4,8,3,7]`
- Output: `49`

## Approach
We use a two-pointer technique.

- Place one pointer at the start and one at the end of the array.
- Compute the water trapped by the current pair.
- Move the pointer that points to the shorter line, because moving the taller line cannot improve the area for the current height.

This approach is efficient because each pair of pointers is considered at most once.

## Why this works
The area is limited by the shorter of the two lines, so if one side is shorter, moving that pointer is the only way to potentially find a taller line and improve the area. The opposite pointer cannot produce a larger area with the same or smaller height.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(1)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
