# Problem 374: Guess Number Higher or Lower

## Problem Statement

We are playing a game with a number guessing API. The API picks a number between 1 and `n`, and you have to guess it.

The API returns:
- `-1` if your guess is higher than the target number.
- `1` if your guess is lower than the target number.
- `0` if your guess is correct.

Given `n`, return the number that was picked.

### Example

Input:
- `n = 10`, target = `6`

Output:
- `6`

## Approach

Use binary search.

- Start with `left = 1` and `right = n`.
- Guess `mid = (left + right) // 2`.
- If `guess(mid)` is `0`, return `mid`.
- If `guess(mid)` is `1`, move `left` to `mid + 1`.
- If `guess(mid)` is `-1`, move `right` to `mid - 1`.

Continue until the correct number is found.

## Why This Works

The responses divide the search space in half each step. Binary search finds the target in logarithmic time by eliminating all invalid values on each guess.

## Complexity Analysis

- Time Complexity: $O(\\log n)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
