#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Create a map
    map<int, string> m;

    // Add elements to the map
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";

    // Display map elements
    cout << "Map elements: " << endl;
    for (auto &pair : m)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Access an element using the key
    int key = 2;
    if (m.find(key) != m.end())
    {
        cout << "Value for key " << key << ": " << m[key] << endl;
    }
    else
    {
        cout << "Key " << key << " not found in map!" << endl;
    }

    // Remove an element using the key
    m.erase(3); // Remove element with key 3

    // Check if a key exists
    if (m.count(3))
    {
        cout << "Key 3 exists in the map." << endl;
    }
    else
    {
        cout << "Key 3 does not exist in the map." << endl;
    }

    // Size of the map
    cout << "Number of elements in map: " << m.size() << endl;

    // Clear all elements
    m.clear();
    cout << "Map after clearing: " << (m.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
