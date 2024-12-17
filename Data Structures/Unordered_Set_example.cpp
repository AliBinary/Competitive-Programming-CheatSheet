#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us = {1, 2, 3, 4, 5};

    // Adding elements
    us.insert(6);

    // Checking if an element exists
    cout << "Is 3 in unordered set? " << (us.count(3) ? "Yes" : "No") << endl;

    // Iterating through unordered set
    cout << "Unordered set elements: ";
    for (int x : us)
        cout << x << " ";
    cout << endl;

    return 0;
}
