#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Create a deque of integers
    deque<int> dq;

    // Inserting elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    // Inserting elements at the front
    dq.push_front(5);
    dq.push_front(2);

    cout << "Deque after inserting elements at both ends:" << endl;
    for (int i = 0; i < dq.size(); ++i)
    {
        cout << dq[i] << " ";
    }
    cout << endl;

    // Accessing elements using indexing
    cout << "Front element: " << dq.front() << endl; // Get the first element
    cout << "Back element: " << dq.back() << endl;   // Get the last element

    // Removing elements from the back and front
    dq.pop_back();  // Removes the last element
    dq.pop_front(); // Removes the first element

    cout << "Deque after popping from both ends:" << endl;
    for (int i = 0; i < dq.size(); ++i)
    {
        cout << dq[i] << " ";
    }
    cout << endl;

    // Inserting elements at specific positions
    dq.insert(dq.begin() + 1, 15); // Insert 15 at position 1
    dq.insert(dq.end() - 1, 25);   // Insert 25 before the last element

    cout << "Deque after inserting at specific positions:" << endl;
    for (int i = 0; i < dq.size(); ++i)
    {
        cout << dq[i] << " ";
    }
    cout << endl;

    // Erasing elements from specific positions
    dq.erase(dq.begin() + 2); // Erase the element at index 2
    dq.erase(dq.end() - 1);   // Erase the last element

    cout << "Deque after erasing elements:" << endl;
    for (int i = 0; i < dq.size(); ++i)
    {
        cout << dq[i] << " ";
    }
    cout << endl;

    // Clearing all elements in the deque
    dq.clear();
    cout << "Deque after clearing all elements: " << dq.size() << " elements left." << endl;

    return 0;
}
