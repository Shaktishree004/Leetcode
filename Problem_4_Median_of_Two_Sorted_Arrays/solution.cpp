#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        int m = static_cast<int>(nums1.size());
        int n = static_cast<int>(nums2.size());
        int left = 0;
        int right = m;

        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeft1 = partition1 > 0 ? nums1[partition1 - 1] : numeric_limits<int>::min();
            int minRight1 = partition1 < m ? nums1[partition1] : numeric_limits<int>::max();
            int maxLeft2 = partition2 > 0 ? nums2[partition2 - 1] : numeric_limits<int>::min();
            int minRight2 = partition2 < n ? nums2[partition2] : numeric_limits<int>::max();

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
                return static_cast<double>(max(maxLeft1, maxLeft2));
            }

            if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            } else {
                left = partition1 + 1;
            }
        }

        return 0.0;
    }
};
