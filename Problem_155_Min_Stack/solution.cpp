#include <stack>
#include <vector>
using namespace std;

class MinStack {
public:
    void push(int val) {
        data.push(val);
        if (mins.empty() || val <= mins.top()) {
            mins.push(val);
        }
    }

    void pop() {
        if (data.empty()) {
            return;
        }
        int popped = data.top();
        data.pop();
        if (!mins.empty() && popped == mins.top()) {
            mins.pop();
        }
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return mins.top();
    }

private:
    stack<int> data;
    stack<int> mins;
};
