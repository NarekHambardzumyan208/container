Custom Exception Class Implementation README
Introduction
This is a C++ custom exception class implementation designed to provide flexibility in handling and reporting exceptions in your C++ programs. The exception class inherits from the standard std::exception class and allows you to define custom exception messages.

Features
Custom Exception Messages: You can create and throw custom exception messages by instantiating the exception class with your desired error message.

Dynamic Memory Management: The exception class manages memory dynamically to store and display error messages.

Usage
To use this custom exception class in your C++ project, follow these steps:

Include the necessary header file in your C++ code:

cpp
Copy code
#include "exception.h" // Include the custom exception class implementation
Throw custom exceptions with specific error messages:

cpp
Copy code
try {
    // Your code that may throw an exception
    if (/* some condition */) {
        throw exception("Custom error message");
    }
} catch (const exception& e) {
    std::cerr << "Exception occurred: " << e.what() << std::endl;
}
Catch and handle exceptions using the try and catch blocks. The custom error message can be accessed using the what() method of the exception object.

Example
Here's a simple example of how to use the custom exception class:

cpp
Copy code
#include <iostream>
#include "exception.h"

void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw exception("Division by zero is not allowed");
    }
    int result = numerator / denominator;
    std::cout << "Result: " << result << std::endl;
}

int main() {
    try {
        divide(10, 0);
    } catch (const exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
Author
Narek Hambardzumyan
Feedback and Contributions
If you have any feedback, suggestions, or would like to contribute to this project, please feel free to create issues or submit pull requests on the GitHub repository.

