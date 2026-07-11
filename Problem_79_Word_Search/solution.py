from typing import List


def exist(board: List[List[str]], word: str) -> bool:
    if not board or not board[0] or not word:
        return False

    rows, cols = len(board), len(board[0])
    visited = [[False] * cols for _ in range(rows)]

    def dfs(r: int, c: int, index: int) -> bool:
        if index == len(word):
            return True
        if r < 0 or r >= rows or c < 0 or c >= cols:
            return False
        if visited[r][c] or board[r][c] != word[index]:
            return False

        visited[r][c] = True
        for dr, dc in ((1, 0), (-1, 0), (0, 1), (0, -1)):
            if dfs(r + dr, c + dc, index + 1):
                return True
        visited[r][c] = False
        return False

    for r in range(rows):
        for c in range(cols):
            if board[r][c] == word[0] and dfs(r, c, 0):
                return True

    return False


if __name__ == "__main__":
    board = [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]]
    print(exist(board, "ABCCED"))
    print(exist(board, "SEE"))
