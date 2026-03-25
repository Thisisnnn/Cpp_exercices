
#include <cstdlib>
#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int number = rand() % 101; //Generate a number between 1 and 100
    int guess;
    int attempts;

    std::cout << "Guess the number (between 1 and 100)!" << std::endl;

    while (1) {
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
            break;
        }
    }
    return 0; 
}