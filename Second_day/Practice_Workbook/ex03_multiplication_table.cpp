#include <iostream>

int main(){
    int number;
    int result;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Multiplication table of " << number << ":" << std::endl;
    for (int i = 0; i < 10; i++) {
        result = number*i;
        std::cout << number << " * " << i << " = " << result << std::endl;
    }
    return 0;
}