from typing import List


def max_area(height: List[int]) -> int:
    left, right = 0, len(height) - 1
    best = 0

    while left < right:
        current_area = min(height[left], height[right]) * (right - left)
        best = max(best, current_area)

        if height[left] <= height[right]:
            left += 1
        else:
            right -= 1

    return best


if __name__ == "__main__":
    print(max_area([1, 8, 6, 2, 5, 4, 8, 3, 7]))
