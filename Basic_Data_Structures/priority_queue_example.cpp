#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    // Max-Heap (default priority_queue is a max-heap)
    priority_queue<int> maxHeap;

    // Inserting elements into the max-heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(40);

    cout << "Max-Heap (Highest priority element at the top):" << endl;
    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " "; // Get the element with the highest priority
        maxHeap.pop();                // Remove the top element
    }
    cout << endl;

    // Min-Heap using a custom comparator
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements into the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(40);

    cout << "Min-Heap (Lowest priority element at the top):" << endl;
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " "; // Get the element with the lowest priority
        minHeap.pop();                // Remove the top element
    }
    cout << endl;

    // Priority Queue of pairs (used for pairwise comparison)
    priority_queue<pair<int, int>> pq; // Max-Heap by default
    pq.push({10, 1});
    pq.push({30, 2});
    pq.push({20, 3});
    pq.push({5, 4});

    cout << "Priority Queue of pairs (Highest first based on first element of pair):" << endl;
    while (!pq.empty())
    {
        cout << "(" << pq.top().first << ", " << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
