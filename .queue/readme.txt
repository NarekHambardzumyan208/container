**Custom C++ Queue Implementation (Derived from Linked List) README**

1. Introduction
   -------------------
   This C++ program demonstrates the implementation of a custom Queue class, which is derived from a custom Linked List class. A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle, where the item that is added first is the one that is removed first.

2. Implementation Details
   -------------------
   The provided C++ code includes the following components:

   - `queue` Class:
     - A generic class representing a queue that inherits from your custom `list` class.
     - Provides queue-specific methods such as `push_back`, `pop_front`, `front`, and `back`.
     - Utilizes the underlying linked list for queue operations.

3. Usage
   -------------------
   To use this custom queue implementation derived from the linked list, follow these steps:

   - Include the necessary header files and source code in your C++ project.

   - Instantiate a `queue` object to create an empty queue:
     ```cpp
     queue<int> myQueue; // Example with an integer type
     ```

   - Add elements to the queue using the `push_back` method (enqueue operation):
     ```cpp
     myQueue.push_back(42);
     myQueue.push_back(24);
     ```

   - Remove elements from the front of the queue using the `pop_front` method (dequeue operation):
     ```cpp
     myQueue.pop_front();
     ```

   - Access the element at the front of the queue without removing it using the `front` method:
     ```cpp
     int frontValue = myQueue.front();
     ```

   - Access the element at the back of the queue without removing it using the `back` method:
     ```cpp
     int backValue = myQueue.back();
     ```

   - Check if the queue is empty using the `empty` method:
     ```cpp
     if (myQueue.empty()) {
         cout << "The queue is empty." << endl;
     } else {
         cout << "The queue is not empty." << endl;
     }
     ```

4. Notes
   -------------------
   - This implementation extends the custom linked list to create a basic queue. It follows the FIFO principle, ensuring that elements are removed in the order they were added.

   - You can further extend or modify this implementation to add additional queue-specific functionality as needed.

   - Ensure proper memory management and deallocate memory when elements are removed from the queue to prevent memory leaks.

5. Author
   -------------------
   This custom queue implementation derived from the linked list was created by Narek Hambardzumyan.

6. Contact
   -------------------
   If you have any questions or suggestions, please feel free to contact the author at narek.hambardzumyan.10@gmail.com
