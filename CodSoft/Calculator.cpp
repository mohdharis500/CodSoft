#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Welcome to the Basic Calculator!" << std::endl;
    std::cout << "Please enter the first number: ";
    std::cin >> num1;

    std::cout << "Please enter the second number: ";
    std::cin >> num2;

    std::cout << "Please choose an operation (+, -, *, /): ";
    std::cin >> operation;

    double result;
    bool validOperation = true;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                validOperation = false;
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            validOperation = false;
            break;
    }

    if (validOperation) {
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}