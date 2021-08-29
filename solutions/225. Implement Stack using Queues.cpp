​
class MyStack {
public:
  /** Initialize your data structure here. */
  MyStack() {
​
  }
​
  /** Push element x onto stack. */
  void push(int x) {
    queue<int> q2;
    q2.push(x);
    
    // Pop elements from q1 and push them in to q2.
    while(!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
   
    // Pop elements from q2 and push them in to q1.
    while(!q2.empty())
    {
      q1.push(q2.front());
      q2.pop();
    }
  }
​
  /** Removes the element on top of the stack and returns that element. */
  int pop() {
    int x = q1.front();
    q1.pop();
    return x;
  }
​
  /** Get the top element. */
  int top() {
    return q1.front();
  }
​
  /** Returns whether the stack is empty. */
  bool empty() {
    return q1.empty();
  }
private:
  queue<int> q1;
};
