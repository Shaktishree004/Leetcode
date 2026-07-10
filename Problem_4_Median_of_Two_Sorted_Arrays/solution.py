from typing import List


def find_median_sorted_arrays(nums1: List[int], nums2: List[int]) -> float:
    if len(nums1) > len(nums2):
        nums1, nums2 = nums2, nums1

    m, n = len(nums1), len(nums2)
    left = 0
    right = m

    while left <= right:
        partition1 = (left + right) // 2
        partition2 = (m + n + 1) // 2 - partition1

        max_left1 = nums1[partition1 - 1] if partition1 > 0 else float('-inf')
        min_right1 = nums1[partition1] if partition1 < m else float('inf')
        max_left2 = nums2[partition2 - 1] if partition2 > 0 else float('-inf')
        min_right2 = nums2[partition2] if partition2 < n else float('inf')

        if max_left1 <= min_right2 and max_left2 <= min_right1:
            if (m + n) % 2 == 0:
                return (max(max_left1, max_left2) + min(min_right1, min_right2)) / 2.0
            return max(max_left1, max_left2)

        if max_left1 > min_right2:
            right = partition1 - 1
        else:
            left = partition1 + 1

    raise ValueError("Input arrays are not sorted")


if __name__ == "__main__":
    print(find_median_sorted_arrays([1, 3], [2]))
    print(find_median_sorted_arrays([1, 2], [3, 4]))
