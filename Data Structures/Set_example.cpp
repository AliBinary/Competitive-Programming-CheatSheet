#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5};

    // Adding elements
    s.insert(6);
    s.insert(3); // Duplicate, won't be added

    // Removing elements
    s.erase(3);

    // Checking if an element exists
    cout << "Is 3 in set? " << (s.count(3) ? "Yes" : "No") << endl;

    // Iterating through set
    cout << "Set elements: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    return 0;
}
