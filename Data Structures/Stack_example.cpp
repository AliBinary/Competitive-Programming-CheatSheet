#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element after push: " << s.top() << endl;

    // Pop an element from the stack
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    // Check if stack is empty
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    // Size of the stack
    cout << "Size of stack: " << s.size() << endl;

    return 0;
}
