Forward List (Singly Linked List) Implementation README
Introduction
This is a C++ implementation of a singly linked list, also known as a "Forward List." A singly linked list is a linear data structure where each element (node) points to the next element in the list, allowing for efficient insertion, deletion, and traversal operations.

Features
Template-based: The Forward List is implemented as a template class, enabling storage of elements of any data type.

Dynamic Memory Management: Memory is allocated dynamically for each node, allowing for efficient memory usage and flexibility in list size.

Basic Operations:

Add: Elements can be added to the end of the list.
Reverse: The list can be reversed in-place.
Print: The elements of the list can be printed to the console.
Empty: You can check if the list is empty.
Clear: You can clear all elements in the list.
Cycle Detection: The implementation can detect cycles within the list.
Nth Element from the End: You can find the nth element from the end of the list.
Usage
To use this Forward List in your C++ project, follow these steps:

Include the necessary header file in your C++ code:

cpp
Copy code
#include "ForwardList.h" // Include the Forward List implementation
Create a Forward List object:

cpp
Copy code
list<ValueType> forwardList;
Perform operations on the Forward List as needed. Here are some examples:

Adding elements to the list:

cpp
Copy code
forwardList.add(value);
Reversing the list:

cpp
Copy code
forwardList.reverse();
Printing the list:

cpp
Copy code
forwardList.print();
Checking if the list is empty:

cpp
Copy code
bool isEmpty = forwardList.empty();
Clearing the list:

cpp
Copy code
forwardList.clear();
Detecting cycles in the list:

cpp
Copy code
bool hasCycle = forwardList.has_cycle();
Finding the nth element from the end:

cpp
Copy code
ValueType nthElement = forwardList.nrd_elem(n);
Example
Here's a simple example of how to use the Forward List:

cpp
Copy code
#include <iostream>
#include "ForwardList.h"

int main() {
    list<int> myList;
    myList.add(1);
    myList.add(3);
    myList.add(4);
    myList.add(7);
    myList.add(6);
    myList.add(8);

    // Reverse the list
    myList.reverse();

    // Print the list
    myList.print();

    // Check if the list is empty
    bool isEmpty = myList.empty();

    // Clear the list
    myList.clear();

    return 0;
}
Author
Narek Hambardzumyan
Feedback and Contributions
If you have any feedback, suggestions, or would like to contribute to this project, please feel free to create issues or submit pull requests on the GitHub repository.

