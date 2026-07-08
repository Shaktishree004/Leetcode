# 1. Two Sum

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
- Input: `nums = [2, 7, 11, 15]`, `target = 9`
- Output: `[0, 1]`

## Approach
We scan the array once while storing numbers we have already seen in a hash map.
For each number `nums[i]`, we compute its complement `target - nums[i]`.
If the complement already exists in the map, we found the answer.
Otherwise, we store the current value with its index.

## Why this works
If a complement exists in the map, it means we previously saw a value that can pair with the current number to reach the target. Because the map stores indices, we can return both positions immediately.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(n)`

## Solution Code
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
