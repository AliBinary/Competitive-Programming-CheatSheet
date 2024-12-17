#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front element: " << q.front() << endl;

    // Pop an element from the queue
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    // Size of the queue
    cout << "Size of queue: " << q.size() << endl;

    // Check if the queue is empty
    if (q.empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
