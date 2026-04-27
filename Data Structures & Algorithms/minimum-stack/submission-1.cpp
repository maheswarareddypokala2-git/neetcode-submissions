class MinStack {
public:
    stack<int>MyStack;
    stack<int>minstack;

    MinStack() {
    }
    
    void push(int val) {
        MyStack.push(val); 
        val = min(val,minstack.empty() ? val : min(val,minstack.top()));  
        minstack.push(val); 
    }
    
    void pop() {
        minstack.pop();
        MyStack.pop();
    }
    
    int top() {
        return MyStack.top(); 
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */