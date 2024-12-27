#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Create an unordered_map
    unordered_map<int, string> um;

    // Add elements to the unordered_map
    um[1] = "one";
    um[2] = "two";
    um[3] = "three";
    um[4] = "four";

    // Display unordered_map elements
    cout << "Unordered_map elements: " << endl;
    for (auto &pair : um)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Access an element using the key
    int key = 2;
    if (um.find(key) != um.end())
    {
        cout << "Value for key " << key << ": " << um[key] << endl;
    }
    else
    {
        cout << "Key " << key << " not found in unordered_map!" << endl;
    }

    // Remove an element using the key
    um.erase(3); // Remove element with key 3

    // Check if a key exists
    if (um.count(3))
    {
        cout << "Key 3 exists in unordered_map." << endl;
    }
    else
    {
        cout << "Key 3 does not exist in unordered_map." << endl;
    }

    // Size of the unordered_map
    cout << "Number of elements in unordered_map: " << um.size() << endl;

    // Clear all elements
    um.clear();
    cout << "Unordered_map after clearing: " << (um.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
