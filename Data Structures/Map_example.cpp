#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;

    // Insert key-value pairs
    m["apple"] = 3;
    m["banana"] = 2;
    m["orange"] = 5;

    // Access value by key
    cout << "Value for apple: " << m["apple"] << endl;

    // Iterate through map
    cout << "Map elements: ";
    for (auto &pair : m)
    {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // Remove an element
    m.erase("banana");
    cout << "Map after erase: ";
    for (auto &pair : m)
    {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // Check if key exists
    if (m.find("orange") != m.end())
    {
        cout << "Orange is in the map." << endl;
    }

    return 0;
}
