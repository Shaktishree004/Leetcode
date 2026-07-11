# 79. Word Search

## Problem Statement
Given an `m x n` board of characters and a string `word`, return `true` if the word can be found in the grid.

The word can be constructed from sequentially adjacent cells, where adjacent means horizontally or vertically neighboring. The same cell cannot be used more than once.

### Example
- Input: `board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, `word = "ABCCED"`
- Output: `true`

## Approach
We use depth-first search with backtracking.

For each cell that matches the first letter of the word, we explore four possible directions recursively. Before exploring a direction, we mark the current cell as visited and restore it afterward.

## Why this works
The search tries every possible path that can form the target word while ensuring that no cell is reused. Because we explore all valid paths from each matching starting cell, we will find the word if it exists.

## Complexity Analysis
- Time: `O(m * n * 4^k)` in the worst case, where `k` is the word length
- Space: `O(k)` for recursion depth plus visited marking

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
