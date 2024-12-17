#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> v;

    // Add elements using push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Vector after push_back: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Accessing elements using at() and indexing
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "Element at index 0: " << v[0] << endl;

    // Pop an element from the back
    v.pop_back();
    cout << "Vector after pop_back: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Insert an element at a specific position
    v.insert(v.begin() + 1, 25); // Insert 25 at index 1
    cout << "Vector after insert: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Remove an element from the vector
    v.erase(v.begin() + 1); // Remove the element at index 1
    cout << "Vector after erase: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Resize the vector
    v.resize(5, 50); // Resize to size 5, fill new elements with 50
    cout << "Vector after resize: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Get the size of the vector
    cout << "Size of vector: " << v.size() << endl;

    // Clear the vector
    v.clear();
    cout << "Vector after clear: " << v.size() << " (size is now zero)" << endl;

    return 0;
}
