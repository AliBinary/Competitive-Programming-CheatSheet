#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> um;

    // Inserting elements
    um[1] = "apple";
    um[2] = "banana";
    um[3] = "cherry";

    // Accessing elements
    cout << "Key 2 maps to: " << um[2] << endl;

    // Checking if key exists
    if (um.find(4) == um.end())
        cout << "Key 4 not found!" << endl;

    // Iterating through unordered map
    cout << "Unordered map elements: ";
    for (auto &pair : um)
    {
        cout << pair.first << " -> " << pair.second << " | ";
    }
    cout << endl;

    return 0;
}
