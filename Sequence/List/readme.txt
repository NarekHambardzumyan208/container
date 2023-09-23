**Custom C++ Linked List Implementation README**

1. Introduction
   -------------------
   This C++ program demonstrates the implementation of a custom Linked List class. A linked list is a data structure consisting of a sequence of elements, where each element points to the next element in the sequence.

2. Implementation Details
   -------------------
   The provided C++ code includes the following components:

   - `Node` Structure:
     - A generic struct representing a node in the linked list.
     - Contains pointers to the previous and next nodes, as well as a data field.
     - Can be instantiated with a default constructor or a constructor that takes data as an argument.

   - `list` Class:
     - A generic class representing a doubly-linked list.
     - Provides methods for adding elements to the list, printing the list, checking if the list is empty, and clearing the list.

3. Usage
   -------------------
   To use this custom linked list implementation, follow these steps:

   - Include the necessary header file and source code in your C++ project.

   - Instantiate a `list` object to create an empty linked list:
     ```cpp
     list<int> myList; // Example with an integer type
     ```

   - Add elements to the list using the `add` method:
     ```cpp
     myList.add(42);
     myList.add(24);
     ```

   - Print the elements in the list using the `print` method:
     ```cpp
     myList.print();
     ```

   - Check if the list is empty using the `empty_list` method:
     ```cpp
     if (myList.empty_list()) {
         cout << "The list is empty." << endl;
     } else {
         cout << "The list is not empty." << endl;
     }
     ```

   - Clear the list using the `clear` method when it's no longer needed:
     ```cpp
     myList.clear();
     ```

4. Notes
   -------------------
   - This implementation is a basic example of a linked list and can be further extended or modified to suit specific requirements.
   - Ensure proper memory management and deallocate memory when clearing the list to prevent memory leaks.

5. Author
   -------------------
   This custom linked list implementation was created by Narek Hambardzumyan.

6. Contact
   -------------------
   If you have any questions or suggestions, please feel free to contact the author at narek.hambardzumyan.10@gmail.com
