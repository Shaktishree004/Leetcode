# 4. Median of Two Sorted Arrays

## Problem Statement
Given two sorted arrays `nums1` and `nums2` of sizes `m` and `n`, return the median of the two sorted arrays.

The overall run time complexity should be `O(log (m + n))`.

### Example
- Input: `nums1 = [1,3]`, `nums2 = [2]`
- Output: `2.0`

## Approach
We use binary search on the smaller array.

The idea is to partition both arrays into left and right halves so that:
- the left half contains the smaller elements,
- the right half contains the larger elements,
- the number of elements on the left and right sides is balanced.

By adjusting the partition point, we can find the median efficiently without merging the arrays.

## Why this works
If the partition is correct, the maximum element on the left side is at most the minimum element on the right side. That means the two halves form a valid split of the combined sorted data, and the median can be derived from the two middle elements (or one middle element if the total count is odd).

## Complexity Analysis
- Time: `O(log(min(m, n)))`
- Space: `O(1)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
