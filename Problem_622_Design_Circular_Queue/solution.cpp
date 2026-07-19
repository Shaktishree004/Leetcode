#include <vector>
using namespace std;

class MyCircularQueue {
public:
    MyCircularQueue(int k) : capacity(k), queue(k), head(0), tail(0), count(0) {}

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        queue[tail] = value;
        tail = (tail + 1) % capacity;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        head = (head + 1) % capacity;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return queue[head];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return queue[(head + count - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }

private:
    int capacity;
    vector<int> queue;
    int head;
    int tail;
    int count;
};
