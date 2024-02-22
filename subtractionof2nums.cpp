#include <iostream>

int main() {
    // Declare variables to hold the numbers
    int num1, num2, result;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform subtraction
    result = num1 - num2;

    // Display the result
    std::cout << "The result of subtraction is: " << result << std::endl;

    return 0;
}
