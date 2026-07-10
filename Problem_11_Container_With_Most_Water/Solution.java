public class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int best = 0;

        while (left < right) {
            int currentArea = Math.min(height[left], height[right]) * (right - left);
            best = Math.max(best, currentArea);

            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return best;
    }
}
