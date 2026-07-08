#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) {
            return s;
        }

        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < static_cast<int>(s.size()); ++i) {
            int left = i;
            int right = i;
            while (left >= 0 && right < static_cast<int>(s.size()) && s[left] == s[right]) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }
                --left;
                ++right;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < static_cast<int>(s.size()) && s[left] == s[right]) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }
                --left;
                ++right;
            }
        }

        return s.substr(start, maxLength);
    }
};
