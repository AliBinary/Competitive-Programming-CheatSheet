#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << arr[0] << endl;
    cout << "At index 2: " << arr.at(2) << endl;

    // Iterating through array
    cout << "Array elements: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // Size of the array
    cout << "Array size: " << arr.size() << endl;

    return 0;
}
