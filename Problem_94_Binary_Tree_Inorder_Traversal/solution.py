from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def inorder_traversal(root: Optional[TreeNode]) -> List[int]:
    result = []
    stack = []
    current = root

    while stack or current:
        while current:
            stack.append(current)
            current = current.left

        current = stack.pop()
        result.append(current.val)
        current = current.right

    return result


if __name__ == "__main__":
    root = TreeNode(1, None, TreeNode(2, TreeNode(3)))
    print(inorder_traversal(root))
