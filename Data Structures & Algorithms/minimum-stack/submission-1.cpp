class MinStack {
public:
        stack<int> stack1;
        stack<int> minstack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        val=min(val,minstack.empty()? val:minstack.top());
        minstack.push(val);
    }
    
    void pop() {
        stack1.pop();
        minstack.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
