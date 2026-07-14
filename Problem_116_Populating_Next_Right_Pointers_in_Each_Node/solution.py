from typing import Optional


class Node:
    def __init__(self, val: int = 0, left: Optional['Node'] = None, right: Optional['Node'] = None, next: Optional['Node'] = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next


def connect(root: Optional[Node]) -> Optional[Node]:
    if not root:
        return None

    leftmost = root
    while leftmost.left:
        current = leftmost
        while current:
            current.left.next = current.right
            if current.next:
                current.right.next = current.next.left
            current = current.next
        leftmost = leftmost.left

    return root


if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)
    connect(root)
    print(root.left.left.next.val)
