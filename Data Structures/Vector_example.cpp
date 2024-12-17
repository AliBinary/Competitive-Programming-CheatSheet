#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << vec[0] << endl;
    cout << "Second element: " << vec.at(1) << endl;

    // Adding elements
    vec.push_back(6);                // Add to the end
    vec.insert(vec.begin() + 2, 10); // Insert at position

    // Removing elements
    vec.pop_back();             // Remove last element
    vec.erase(vec.begin() + 1); // Remove from specific position

    // Size of vector
    cout << "Vector size: " << vec.size() << endl;

    // Iterating through vector
    cout << "Vector elements: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    // Clearing the vector
    vec.clear();
    cout << "After clear, size: " << vec.size() << endl;

    return 0;
}
