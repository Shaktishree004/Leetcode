from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def zigzag_level_order(root: Optional[TreeNode]) -> List[List[int]]:
    if not root:
        return []

    result: List[List[int]] = []
    queue = deque([root])
    left_to_right = True

    while queue:
        level_size = len(queue)
        level: List[int] = []

        for _ in range(level_size):
            node = queue.popleft()
            level.append(node.val)
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)

        if not left_to_right:
            level.reverse()
        result.append(level)
        left_to_right = not left_to_right

    return result


if __name__ == "__main__":
    root = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print(zigzag_level_order(root))
