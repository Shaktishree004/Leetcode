from typing import Optional


class ListNode:
    def __init__(self, x: int, next: Optional['ListNode'] = None):
        self.val = x
        self.next = next


class Solution:
    def getIntersectionNode(self, headA: Optional[ListNode], headB: Optional[ListNode]) -> Optional[ListNode]:
        a, b = headA, headB

        while a is not b:
            a = a.next if a else headB
            b = b.next if b else headA

        return a


if __name__ == "__main__":
    common = ListNode(8, ListNode(4, ListNode(5)))
    headA = ListNode(4, ListNode(1, common))
    headB = ListNode(5, ListNode(6, ListNode(1, common)))
    result = Solution().getIntersectionNode(headA, headB)
    print(result.val if result else None)
