#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> deq = {1, 2, 3, 4, 5};

    // Adding elements
    deq.push_front(0); // Add at front
    deq.push_back(6);  // Add at back

    // Removing elements
    deq.pop_front(); // Remove from front
    deq.pop_back();  // Remove from back

    // Accessing elements
    cout << "First element: " << deq.front() << endl;
    cout << "Last element: " << deq.back() << endl;

    // Iterating through deque
    cout << "Deque elements: ";
    for (int x : deq)
        cout << x << " ";
    cout << endl;

    // Size of deque
    cout << "Deque size: " << deq.size() << endl;

    return 0;
}
