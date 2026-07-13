from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def is_valid_bst(root: Optional[TreeNode]) -> bool:
    stack = []
    prev = None

    while stack or root:
        while root:
            stack.append(root)
            root = root.left

        root = stack.pop()
        if prev is not None and root.val <= prev:
            return False
        prev = root.val
        root = root.right

    return True


if __name__ == "__main__":
    root = TreeNode(2, TreeNode(1), TreeNode(3))
    print(is_valid_bst(root))
