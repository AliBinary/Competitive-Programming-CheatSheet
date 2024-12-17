#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // Inserting elements
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";

    // Accessing elements
    cout << "Key 2 maps to: " << m[2] << endl;

    // Checking if key exists
    if (m.find(4) == m.end())
        cout << "Key 4 not found!" << endl;

    // Iterating through map
    cout << "Map elements: ";
    for (auto &pair : m)
    {
        cout << pair.first << " -> " << pair.second << " | ";
    }
    cout << endl;

    return 0;
}
