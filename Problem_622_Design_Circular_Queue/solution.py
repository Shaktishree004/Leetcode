class MyCircularQueue:
    def __init__(self, k: int):
        self.k = k
        self.queue = [None] * k
        self.head = 0
        self.tail = 0
        self.count = 0

    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        self.queue[self.tail] = value
        self.tail = (self.tail + 1) % self.k
        self.count += 1
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        self.queue[self.head] = None
        self.head = (self.head + 1) % self.k
        self.count -= 1
        return True

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        return self.queue[self.head]

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        return self.queue[(self.head + self.count - 1) % self.k]

    def isEmpty(self) -> bool:
        return self.count == 0

    def isFull(self) -> bool:
        return self.count == self.k


if __name__ == "__main__":
    q = MyCircularQueue(3)
    print(q.enQueue(1))
    print(q.enQueue(2))
    print(q.enQueue(3))
    print(q.enQueue(4))
    print(q.Rear())
    print(q.isFull())
    print(q.deQueue())
    print(q.enQueue(4))
    print(q.Rear())
