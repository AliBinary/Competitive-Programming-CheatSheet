#include <iostream>
#include <set>
#include <algorithm> // For set algorithms like set_union, set_intersection, etc.
#include <iterator>  // For inserter
using namespace std;

int main()
{ // Return type changed to int
    // Create two sets
    set<int> s1 = {1, 2, 3, 4, 5};
    set<int> s2 = {4, 5, 6, 7, 8};

    // Display sets
    cout << "Set 1: ";
    for (int x : s1)
        cout << x << " ";
    cout << endl;

    cout << "Set 2: ";
    for (int x : s2)
        cout << x << " ";
    cout << endl;

    // Union of two sets
    set<int> union_set;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(union_set, union_set.begin()));
    cout << "Union: ";
    for (int x : union_set)
        cout << x << " ";
    cout << endl;

    // Intersection of two sets
    set<int> intersection_set;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersection_set, intersection_set.begin()));
    cout << "Intersection: ";
    for (int x : intersection_set)
        cout << x << " ";
    cout << endl;

    // Symmetric difference of two sets
    set<int> symmetric_difference_set;
    set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(symmetric_difference_set, symmetric_difference_set.begin()));
    cout << "Symmetric Difference: ";
    for (int x : symmetric_difference_set)
        cout << x << " ";
    cout << endl;

    // Difference of two sets (s1 - s2)
    set<int> difference_set;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(difference_set, difference_set.begin()));
    cout << "Difference (s1 - s2): ";
    for (int x : difference_set)
        cout << x << " ";
    cout << endl;

    return 0; // Ensure that main returns an int
}
