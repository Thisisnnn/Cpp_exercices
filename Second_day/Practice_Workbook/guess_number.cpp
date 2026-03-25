
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <ostream>

int main(){
    srand(time(0));
    int number = rand() % 101; //Generate a number between 1 and 100
    // std::cout << number << std::endl;
    int guess;
    int attempts;
    char choice;
    int limit;

    std::cout << "Guess the number (between 1 and 100)!" << std::endl;
    std::cout << "Do you want to set a limit? (y/n) ";
    std::cin >> choice;

    switch (choice) {
        case 'y':
            std::cout << "What's the limit? ";
            std::cin >> limit;
            break;
        case 'n':
            break;
        default:
            std::cout << "Incorrect answer." << std::endl;
            break;
            return 1;
    }

    while (limit > attempts) {
        std::cout << "Your guess: ";
        std::cin >> guess;

        if (guess > number) {
            std::cout << "Lower!" << std::endl;
            attempts +=1;
        }
        else if (guess < number) {
            std::cout << "Higher!" << std::endl;
            attempts +=1;
        }
        else {
            std::cout << "Congratulation!\nYou found it in " << attempts << " attempts!" << std::endl;
            return 0;         
        }
    }
    std::cout << "You lost D:" << std::endl;
    return 0; 
}