class MinStack {
public:
    stack<int> s1,s2;
    MinStack() {
        
    }
    
    void push(int value) {
        if(s2.empty()||value<=s2.top())
        {
            s2.push(value);
        }
        s1.push(value);
    }
    
    void pop() {
        if(s1.top()==s2.top())
        {
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
