#include <iostream>
#include <ostream>

int main(){
    double first_number;
    double second_number;
    char operators;
    double result;
    std::cout << "Enter the first number: ";
    std::cin >> first_number;
    std::cout << "Enter the second number: ";
    std::cin >> second_number;
    std::cout << "Enter the operator: ";
    std::cin >> operators;

    switch (operators) {
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '*':
            result = first_number * second_number;
            break;
        case '/':
            if (second_number != 0) { // Avoid division by zero
                result = first_number / second_number;
            }
            else {
                std::cout << "Disivion by zero impossible." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid Operator" << std::endl;
            return 1;
    }
    std::cout << "Result: " << first_number << operators << second_number << " = " << result << std::endl;
    return 0;
}