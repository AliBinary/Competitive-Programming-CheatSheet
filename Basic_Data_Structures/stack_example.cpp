#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Create a stack of integers
    stack<int> st;

    // Inserting elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Accessing the top element
    cout << "Top element: " << st.top() << endl; // Get the top element

    // Removing the top element
    st.pop(); // Removes the top element
    cout << "Stack after popping the top element:" << endl;
    cout << "Top element: " << st.top() << endl; // New top element

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    // Accessing the size of the stack
    cout << "Stack size: " << st.size() << endl;

    // Popping all elements from the stack
    while (!st.empty())
    {
        cout << "Popping element: " << st.top() << endl;
        st.pop();
    }

    // After popping all elements
    cout << "Stack size after popping all elements: " << st.size() << endl;
    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
