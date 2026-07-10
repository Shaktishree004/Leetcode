public class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        if (nums1.length > nums2.length) {
            int[] temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }

        int m = nums1.length;
        int n = nums2.length;
        int left = 0;
        int right = m;

        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeft1 = partition1 > 0 ? nums1[partition1 - 1] : Integer.MIN_VALUE;
            int minRight1 = partition1 < m ? nums1[partition1] : Integer.MAX_VALUE;
            int maxLeft2 = partition2 > 0 ? nums2[partition2 - 1] : Integer.MIN_VALUE;
            int minRight2 = partition2 < n ? nums2[partition2] : Integer.MAX_VALUE;

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((m + n) % 2 == 0) {
                    return (Math.max(maxLeft1, maxLeft2) + Math.min(minRight1, minRight2)) / 2.0;
                }
                return Math.max(maxLeft1, maxLeft2);
            }

            if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            } else {
                left = partition1 + 1;
            }
        }

        throw new IllegalArgumentException("Input arrays are not valid");
    }
}
