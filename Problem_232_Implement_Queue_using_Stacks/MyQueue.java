import java.util.ArrayDeque;
import java.util.Deque;

public class MyQueue {
    private final Deque<Integer> inputStack = new ArrayDeque<>();
    private final Deque<Integer> outputStack = new ArrayDeque<>();

    private void transfer() {
        if (outputStack.isEmpty()) {
            while (!inputStack.isEmpty()) {
                outputStack.push(inputStack.pop());
            }
        }
    }

    public void push(int x) {
        inputStack.push(x);
    }

    public int pop() {
        transfer();
        return outputStack.pop();
    }

    public int peek() {
        transfer();
        return outputStack.peek();
    }

    public boolean empty() {
        return inputStack.isEmpty() && outputStack.isEmpty();
    }
}
