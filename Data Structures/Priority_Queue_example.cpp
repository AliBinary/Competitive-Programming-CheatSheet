#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max-heap (default behavior)
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);

    cout << "Top element (Max-heap): " << pq.top() << endl;

    pq.pop();
    cout << "Top after pop: " << pq.top() << endl;

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(5);

    cout << "Top element (Min-heap): " << min_pq.top() << endl;

    return 0;
}
