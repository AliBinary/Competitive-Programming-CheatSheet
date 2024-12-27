#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Create a queue of integers
    queue<int> q;

    // Inserting elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Accessing elements in the queue
    cout << "Front element: " << q.front() << endl; // Get the first element
    cout << "Back element: " << q.back() << endl;   // Get the last element

    // Removing elements from the front
    q.pop(); // Removes the front element
    cout << "Queue after popping front element:" << endl;
    cout << "Front element: " << q.front() << endl; // New front element

    // Checking if the queue is empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Accessing the size of the queue
    cout << "Queue size: " << q.size() << endl;

    // Popping all elements from the queue
    while (!q.empty())
    {
        cout << "Popping element: " << q.front() << endl;
        q.pop();
    }

    // After popping all elements
    cout << "Queue size after popping all elements: " << q.size() << endl;
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
