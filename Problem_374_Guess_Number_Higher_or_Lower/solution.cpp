#include <cstddef>

class GuessGame {
public:
    GuessGame(int pick) : pick(pick) {}

    int guess(int num) {
        if (num == pick) {
            return 0;
        }
        return num < pick ? 1 : -1;
    }

private:
    int pick;
};

class Solution : public GuessGame {
public:
    Solution(int pick) : GuessGame(pick) {}

    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int res = guess(mid);
            if (res == 0) {
                return mid;
            } else if (res < 0) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
};
