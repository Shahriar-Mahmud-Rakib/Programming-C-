#include <iostream>

int main() {
    // Declare an array of integers with size 5
    int myArray[5];

    // Initialize the elements of the array
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    myArray[3] = 4;
    myArray[4] = 5;

    // Access and print elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
