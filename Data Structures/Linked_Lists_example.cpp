#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};

    // Adding elements
    lst.push_back(6);  // Add to the end
    lst.push_front(0); // Add to the front

    // Removing elements
    lst.pop_back();  // Remove from the end
    lst.pop_front(); // Remove from the front

    // Iterating through list
    cout << "List elements: ";
    for (int x : lst)
        cout << x << " ";
    cout << endl;

    // Size of list
    cout << "List size: " << lst.size() << endl;

    return 0;
}
