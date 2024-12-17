#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(15);

    // Print elements in sorted order
    cout << "Set elements: ";
    for (int num : s)
        cout << num << " ";
    cout << endl;

    // Check if an element exists
    if (s.find(15) != s.end())
    {
        cout << "15 is in the set." << endl;
    }

    // Remove an element
    s.erase(10);
    cout << "Set after erase: ";
    for (int num : s)
        cout << num << " ";
    cout << endl;

    // Size of the set
    cout << "Size of set: " << s.size() << endl;

    return 0;
}
