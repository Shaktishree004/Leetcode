class GuessGame {
    private int pick;

    public GuessGame(int pick) {
        this.pick = pick;
    }

    public int guess(int num) {
        if (num == pick) {
            return 0;
        }
        return num < pick ? 1 : -1;
    }
}

public class Solution extends GuessGame {
    public Solution(int pick) {
        super(pick);
    }

    public int guessNumber(int n) {
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
}
