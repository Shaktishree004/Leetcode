#include <stack>
using namespace std;

class MyQueue {
public:
    void push(int x) {
        input_stack.push(x);
    }

    int pop() {
        transfer();
        int front = output_stack.top();
        output_stack.pop();
        return front;
    }

    int peek() {
        transfer();
        return output_stack.top();
    }

    bool empty() {
        return input_stack.empty() && output_stack.empty();
    }

private:
    void transfer() {
        if (output_stack.empty()) {
            while (!input_stack.empty()) {
                output_stack.push(input_stack.top());
                input_stack.pop();
            }
        }
    }

    stack<int> input_stack;
    stack<int> output_stack;
};
