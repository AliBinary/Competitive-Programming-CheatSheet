#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    // Create a bitset of size 8
    bitset<8> b1;             // All bits are initially 0
    bitset<8> b2("11001010"); // Initialize with a binary string

    cout << "b1: " << b1 << endl;
    cout << "b2: " << b2 << endl;

    // Set bit 3 to 1
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

    // Check if bit at index 2 is set to 1
    if (b1.test(2))
    {
        cout << "Bit 2 is set to 1." << endl;
    }

    // Check if no bits are set to 1
    if (b1.none())
    {
        cout << "No bits are set to 1." << endl;
    }
    else
    {
        cout << "Some bits are set to 1." << endl;
    }

    // Count the number of bits set to 1
    cout << "Number of 1 bits in b1: " << b1.count() << endl;

    // Perform AND, OR, XOR operations
    bitset<8> b3("10101010");
    bitset<8> b4("11001100");

    cout << "b3 & b4: " << (b3 & b4) << endl;
    cout << "b3 | b4: " << (b3 | b4) << endl;
    cout << "b3 ^ b4: " << (b3 ^ b4) << endl;

    // Convert bitset to string
    cout << "b3 as string: " << b3.to_string() << endl;

    return 0;
}
