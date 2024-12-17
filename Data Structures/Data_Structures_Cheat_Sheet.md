# Competitive Programming C++ Data Structures Cheat Sheet

---

## 1. Vector

-   Description: Dynamic array that allows fast random access.
-   Methods:
    -   push_back(x): Add element x to the end.
    -   pop_back(): Remove the last element.
    -   at(i): Access the element at index i (bounds checked).
    -   operator[]: Access the element at index i (no bounds check).
    -   size(): Return the number of elements.
    -   empty(): Check if the vector is empty.
    -   resize(n, x): Resize the vector to size n and fill new elements with x.
    -   clear(): Remove all elements.

---

## 2. Stack

-   Description: Last-In-First-Out (LIFO) structure, used for backtracking problems.
-   Methods:
    -   push(x): Add element x to the top.
    -   pop(): Remove the top element.
    -   top(): Get the top element.
    -   size(): Return the number of elements.
    -   empty(): Check if the stack is empty.

---

## 3. Queue

-   Description: First-In-First-Out (FIFO) structure, ideal for problems involving processing in order.
-   Methods:
    -   push(x): Add element x to the back.
    -   pop(): Remove the front element.
    -   front(): Get the front element.
    -   back(): Get the back element.
    -   size(): Return the number of elements.
    -   empty(): Check if the queue is empty.

---

## 4. Priority Queue (Max-Heap by default)

-   Description: A heap-based structure that always gives the maximum element.
-   Methods:
    -   push(x): Add element x to the queue.
    -   pop(): Remove the largest element.
    -   top(): Get the largest element.
    -   size(): Return the number of elements.
    -   empty(): Check if the queue is empty.

---

## 5. Set

-   Description: Collection of unique elements in sorted order.
-   Methods:
    -   insert(x): Add element x.
    -   erase(x): Remove element x.
    -   find(x): Check if element x exists.
    -   size(): Return the number of elements.
    -   empty(): Check if the set is empty.
    -   clear(): Remove all elements.

---

## 6. Map

-   Description: Stores key-value pairs in sorted order based on keys.
-   Methods:
    -   insert({key, value}): Add key-value pair.
    -   erase(key): Remove element by key.
    -   find(key): Check if a key exists.
    -   operator[]: Access the value associated with a key.
    -   size(): Return the number of elements.
    -   empty(): Check if the map is empty.
    -   clear(): Remove all elements.

---

## 7. Unordered Set

-   Description: Collection of unique elements with no specific order.
-   Methods:
    -   insert(x): Add element x.
    -   erase(x): Remove element x.
    -   find(x): Check if element x exists.
    -   size(): Return the number of elements.
    -   empty(): Check if the unordered set is empty.

---

## 8. Unordered Map

-   Description: Stores key-value pairs with no specific order.
-   Methods:
    -   insert({key, value}): Add key-value pair.
    -   erase(key): Remove element by key.
    -   find(key): Check if a key exists.
    -   operator[]: Access the value associated with a key.
    -   size(): Return the number of elements.
    -   empty(): Check if the unordered map is empty.

---

## 9. Bitset

-   Description: A space-efficient container for a fixed-size sequence of bits (0 or 1).
-   Methods:
    -   set(i): Set bit at index i to 1.
    -   reset(i): Set bit at index i to 0.
    -   flip(i): Toggle the bit at index i.
    -   test(i): Check if the bit at index i is 1.
    -   count(): Count the number of bits set to 1.
    -   size(): Return the number of bits.
    -   operator[]: Access the bit at index i.
    -   to_string(): Convert bitset to string.

---

## 10. Array

-   Description: Fixed-size array used for fast access, but size cannot be changed after initialization.
-   Methods:
    -   fill(x): Fill all elements with the value x.
    -   size(): Return the number of elements.
    -   operator[]: Access element at index i.
    -   at(i): Access element at index i with bounds checking.
    -   front(): Get the first element.
    -   back(): Get the last element.

---

## 11. Deque

-   Description: Double-ended queue that allows fast insertion and removal at both ends.
-   Methods:
    -   push_front(x): Add element x to the front.
    -   push_back(x): Add element x to the back.
    -   pop_front(): Remove the front element.
    -   pop_back(): Remove the back element.
    -   front(): Get the front element.
    -   back(): Get the back element.
    -   size(): Return the number of elements.
    -   empty(): Check if the deque is empty.

---

## 12. Linked List (Using STL List)

-   Description: Doubly linked list that allows fast insertion and deletion at both ends.
-   Methods:
    -   push_back(x): Add element x to the back.
    -   push_front(x): Add element x to the front.
    -   pop_back(): Remove the last element.
    -   pop_front(): Remove the first element.
    -   size(): Return the number of elements.
    -   empty(): Check if the list is empty.
    -   front(): Get the first element.
    -   back(): Get the last element.
    -   clear(): Remove all elements.
