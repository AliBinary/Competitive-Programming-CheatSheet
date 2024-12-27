#include <iostream>
#include <list>
#include <algorithm> // Required for std::find
using namespace std;

int main()
{
    // Create a list
    list<int> lst;

    // Add elements to the list
    lst.push_back(1);  // Add to the end
    lst.push_front(2); // Add to the front
    lst.push_back(3);  // Add to the end

    // Display list elements
    cout << "List elements: ";
    for (auto &elem : lst)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Remove an element from the front
    lst.pop_front(); // Removes the first element

    // Remove an element from the back
    lst.pop_back(); // Removes the last element

    // Find an element (using iterator)
    auto it = find(lst.begin(), lst.end(), 3); // Now works because we included <algorithm>
    if (it != lst.end())
    {
        cout << "Found 3 in the list" << endl;
    }
    else
    {
        cout << "3 not found in the list" << endl;
    }

    // Insert an element after a specific position
    auto pos = lst.begin();
    lst.insert(++pos, 4); // Insert 4 after the first element

    // Display list after insertion
    cout << "List after insertion: ";
    for (auto &elem : lst)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Remove a specific element
    lst.remove(4); // Removes all occurrences of 4

    // Display list after removal
    cout << "List after removal: ";
    for (auto &elem : lst)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Size of the list
    cout << "Size of the list: " << lst.size() << endl;

    // Clear the list
    lst.clear();
    cout << "List after clearing: " << (lst.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
