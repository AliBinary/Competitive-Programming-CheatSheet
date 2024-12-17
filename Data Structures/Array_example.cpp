#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "Element at index 2: " << arr[2] << endl;

    // Size of the array
    cout << "Size of array: " << arr.size() << endl;

    // Fill array with a value
    arr.fill(10);
    cout << "Array after fill: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
