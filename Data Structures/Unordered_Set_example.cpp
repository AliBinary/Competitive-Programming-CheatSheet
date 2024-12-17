#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(15);

    // Print elements
    cout << "Unordered set elements: ";
    for (int num : us)
        cout << num << " ";
    cout << endl;

    // Check if an element exists
    if (us.find(15) != us.end())
    {
        cout << "15 is in the unordered set." << endl;
    }

    // Remove an element
    us.erase(10);
    cout << "Unordered set after erase: ";
    for (int num : us)
        cout << num << " ";
    cout << endl;

    return 0;
}
