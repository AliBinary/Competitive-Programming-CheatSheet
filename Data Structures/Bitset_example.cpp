#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> b1; // All bits initialized to 0
    bitset<8> b2("11001010");

    // Set bit at index 3 to 1
    b1.set(3);
    cout << "b1 after set(3): " << b1 << endl;

    // Reset all bits of b2
    b2.reset();
    cout << "b2 after reset: " << b2 << endl;

    // Flip all bits of b1
    b1.flip();
    cout << "b1 after flip: " << b1 << endl;

    // Access the bit at index 2
    cout << "b1[2]: " << b1[2] << endl;

    // Test if bit at index 2 is set to 1
    if (b1.test(2))
    {
        cout << "Bit 2 is set to 1." << endl;
    }

    // Count the number of 1's in b1
    cout << "Number of 1's in b1: " << b1.count() << endl;

    return 0;
}
