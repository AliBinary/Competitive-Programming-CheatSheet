#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stk;

    // Pushing elements
    stk.push(10);
    stk.push(20);
    stk.push(30);

    // Accessing top element
    cout << "Top element: " << stk.top() << endl;

    // Popping elements
    stk.pop();
    cout << "Top after pop: " << stk.top() << endl;

    // Checking if stack is empty
    cout << "Is stack empty? " << (stk.empty() ? "Yes" : "No") << endl;

    // Size of the stack
    cout << "Stack size: " << stk.size() << endl;

    return 0;
}
