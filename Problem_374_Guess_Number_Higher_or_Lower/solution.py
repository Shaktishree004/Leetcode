from typing import Callable


class GuessGame:
    def __init__(self, pick: int):
        self.pick = pick

    def guess(self, num: int) -> int:
        if num == self.pick:
            return 0
        return 1 if num < self.pick else -1


class Solution(GuessGame):
    def guessNumber(self, n: int) -> int:
        left, right = 1, n
        while left <= right:
            mid = (left + right) // 2
            res = self.guess(mid)
            if res == 0:
                return mid
            elif res < 0:
                right = mid - 1
            else:
                left = mid + 1
        return -1


if __name__ == "__main__":
    solution = Solution(6)
    print(solution.guessNumber(10))
