C++ Containers Implementation
This project aims to provide a C++ implementation of various containers commonly used in programming, including Vector, List, Forward List, Stack, and Queue. These containers offer different data structures to store and manage elements efficiently, and they come with their respective functionalities for element insertion, removal, access, and traversal.

Table of Contents
Introduction
Containers
Usage
Examples
Contributing
License
Introduction
In this project, we have implemented the following containers:

Vector: A dynamic array that can resize automatically to accommodate the number of elements. It provides random access to elements and supports various operations like adding, removing, and accessing elements efficiently.

List: A doubly-linked list that allows efficient insertion and removal of elements at any position within the list. Unlike vectors, lists do not provide random access to elements, but they are efficient for inserting and removing elements.

Forward List: A singly-linked list that allows efficient insertion and removal of elements at any position within the list. Similar to lists, forward lists do not provide random access to elements but are useful for specific use cases.

Stack: A container that follows the Last-In-First-Out (LIFO) principle. It provides access to the top element and supports operations like push (add an element to the top) and pop (remove the top element).

Queue: A container that follows the First-In-First-Out (FIFO) principle. It provides access to the front and back elements and supports operations like enqueue (add an element to the back) and dequeue (remove the front element).

Usage
To use the containers provided in this project, you need to include their respective header files in your C++ code.

cpp
Copy code
#include "vector.h"
#include "list.h"
#include "forward_list.h"
#include "stack.h"
#include "queue.h"
Ensure that you have a C++ compiler that supports the C++11 standard or above.

Examples
Here are some examples demonstrating how to use the containers:

Using Vector:
cpp
Copy code
#include "vector.h"
#include <iostream>

int main() {
    Vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (int i : vec) {
        std::cout << i << " ";
    }

    return 0;
}
Using Stack:
cpp
Copy code
#include "stack.h"
#include <iostream>

int main() {
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}
Similar examples can be created for the other containers as well.

Contributing
If you would like to contribute to this project, please follow the guidelines specified in the CONTRIBUTING.md file. We welcome contributions and bug reports to help improve the implementation.

License
This project is licensed under the MIT License - see the LICENSE.md file for details.
