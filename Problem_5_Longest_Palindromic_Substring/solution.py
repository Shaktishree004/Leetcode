def longest_palindromic_substring(s: str) -> str:
    if not s:
        return ""

    start = 0
    max_len = 1

    def expand(left: int, right: int) -> None:
        nonlocal start, max_len
        while left >= 0 and right < len(s) and s[left] == s[right]:
            curr_len = right - left + 1
            if curr_len > max_len:
                max_len = curr_len
                start = left
            left -= 1
            right += 1

    for i in range(len(s)):
        expand(i, i)
        expand(i, i + 1)

    return s[start:start + max_len]


if __name__ == "__main__":
    print(longest_palindromic_substring("babad"))
    print(longest_palindromic_substring("cbbd"))
