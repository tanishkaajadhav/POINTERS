(a) POINTERINCREMENT.CPP

AIM:

To demonstrate increment of pointers for various data types (int, char, double) and observe changes in addresses.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Pointers store memory addresses. Incrementing a pointer moves it to the next memory location depending on the size of the data type it points to. This helps in understanding how memory allocation works for different data types.

ALGORITHM:

Start the program and include necessary header files.

Define a class with a public method to demonstrate pointer increment.

Declare variables of int, char, and double.

Declare pointers pointing to these variables.

Display the original addresses.

Increment the pointers and display the new addresses.

Stop the program.

CONCLUSION:

Incrementing a pointer increases its address by the size of the data type it points to. This demonstrates how pointer arithmetic works with different data types.

(b) POINTERADD_SUB.CPP

AIM:

To perform addition and subtraction using pointers and manipulate array addresses.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Pointer arithmetic allows moving a pointer forward or backward by multiples of the size of the data type it points to. This helps in traversing arrays efficiently.

ALGORITHM:

Start the program and include necessary header files.

Define a class with a public method to demonstrate pointer addition and subtraction.

Declare an array and a pointer pointing to the first element.

Add an integer to the pointer and display the value it points to.

Subtract an integer from the pointer and display the value it points to.

Stop the program.

CONCLUSION:

Pointer addition and subtraction allow efficient navigation through arrays using memory addresses.

(c) ARRAYREVERSAL.CPP

AIM:

To reverse the elements of an array using pointers.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Pointers can traverse arrays from start and end simultaneously. Swapping elements using pointers reverses the array in-place without using extra memory.

ALGORITHM:

Start the program and include necessary header files.

Define a class with a public method to reverse an array using pointers.

Declare an array and pointers pointing to the start and end elements.

Swap the elements pointed to by the start and end pointers.

Move the start pointer forward and end pointer backward until they meet.

Display the reversed array.

Stop the program.

CONCLUSION:

Pointers provide an efficient way to reverse arrays in-place, demonstrating memory-level manipulation.

(d) STRINGDISPLAY.CPP

AIM:

To display the elements of a string using pointers.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

A string is an array of characters. A pointer can traverse each character until the null terminator \0 is reached to access elements sequentially.

ALGORITHM:

Start the program and include necessary header files.

Define a class with a public method to display string elements using a pointer.

Declare a character array (string).

Use a pointer to traverse the string until \0 is encountered.

Display each character.

Stop the program.

CONCLUSION:

Pointers allow simple and efficient sequential access to string elements, demonstrating character-level memory traversal.
