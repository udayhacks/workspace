#include <iostream>  // Required for input and output

int main() {
    // Declare variables
    int num1, num2, sum;

    // Output message to the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;  // Input first number

    std::cout << "Enter the second number: ";
    std::cin >> num2;  // Input second number

    // Perform addition
    sum = num1 + num2;

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << std::endl;

    return 0;  // Indicate successful program termination
}
