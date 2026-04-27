class MinStack {
public:
    stack<int>MyStack;
    map<int,int>help_set;

    MinStack() {
    }
    
    void push(int val) {
        help_set[val]++;
        MyStack.push(val);    
    }
    
    void pop() {
        if(help_set[MyStack.top()]==1)
        help_set.erase(MyStack.top());
        else help_set[MyStack.top()]--;
        MyStack.pop();
    }
    
    int top() {
        return MyStack.top();  
    }
    
    int getMin() {
        map<int,int> ::iterator it = help_set.begin();
        return it->first;
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