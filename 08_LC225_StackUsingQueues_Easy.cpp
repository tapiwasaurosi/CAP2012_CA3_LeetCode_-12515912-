class MyStack {
    private:
queue<int> alpha;
queue<int> beta;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        beta.push(x);
        while(!alpha.empty()){
            beta.push(alpha.front());
            alpha.pop();
        }
        swap(alpha, beta);
    }
    
    int pop() {
        int val = alpha.front();
        alpha.pop();
        return val;
    }
    
    int top() {
        return alpha.front();
    }
    
    bool empty() {
        return alpha.empty();
    }
};
