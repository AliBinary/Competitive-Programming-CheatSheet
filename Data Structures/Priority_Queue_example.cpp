#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element (max priority): " << pq.top() << endl;

    // Pop the top element
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;

    // Size of the priority queue
    cout << "Size of priority queue: " << pq.size() << endl;

    return 0;
}
