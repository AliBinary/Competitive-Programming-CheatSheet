#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> vec;

    // Adding elements using push_back()
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // Displaying elements using a loop
    cout << "Elements in the vector: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Accessing elements directly (random access)
    cout << "Element at index 2: " << vec[2] << endl;

    // Modifying an element
    vec[1] = 25;
    cout << "Vector after modifying index 1: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Inserting an element at a specific position
    vec.insert(vec.begin() + 2, 15); // Insert 15 at index 2
    cout << "Vector after inserting 15 at index 2: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Removing an element from a specific position
    vec.erase(vec.begin() + 3); // Remove element at index 3
    cout << "Vector after erasing element at index 3: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Accessing the first and last element
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // Resizing the vector
    vec.resize(5, 100); // Resize to 5, new elements initialized to 100
    cout << "Vector after resizing: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Popping the last element
    vec.pop_back();
    cout << "Vector after popping the last element: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Checking if the vector is empty
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // Clearing all elements in the vector
    vec.clear();
    cout << "Vector after clearing: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    return 0;
}
