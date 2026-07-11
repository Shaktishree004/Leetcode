def str_str(haystack: str, needle: str) -> int:
    if needle == "":
        return 0

    n, m = len(haystack), len(needle)
    for i in range(n - m + 1):
        if haystack[i:i + m] == needle:
            return i

    return -1


if __name__ == "__main__":
    print(str_str("hello", "ll"))
    print(str_str("aaaaa", "bba"))
