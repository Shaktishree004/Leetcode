# 88. Merge Sorted Array

## Problem Statement
You are given two integer arrays `nums1` and `nums2`, where `nums1` has a length of `m + n` and contains `m` valid elements followed by `n` zeros, and `nums2` has length `n`.

Merge `nums2` into `nums1` in sorted order.

### Example
- Input: `nums1 = [1,2,3,0,0,0]`, `nums2 = [2,5,6]`, `m = 3`, `n = 3`
- Output: `[1,2,2,3,5,6]`

## Approach
We merge from the end of the arrays.

Because `nums1` has extra space at the end, we can place the largest elements at the end of `nums1` first. We maintain three pointers:
- `i` for the last valid index in `nums1`
- `j` for the last index in `nums2`
- `k` for the last position in the merged array

At each step, we place the larger of the two current values into `nums1[k]` and move the corresponding pointer.

## Why this works
Merging from the end avoids overwriting elements that have not been processed yet. This makes the solution both correct and space-efficient.

## Complexity Analysis
- Time: `O(m + n)`
- Space: `O(1)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
