#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Pushing elements
    q.push(100);
    q.push(200);
    q.push(300);

    // Accessing front and back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Popping elements
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    // Checking if queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Size of the queue
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
