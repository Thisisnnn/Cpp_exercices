#include <vector>
#include <iostream>

int main(){
    double num_grades;

    std::cout << "What's the number of grades? ";
    std::cin >> num_grades;

    std::vector<double> grades(num_grades); //init the array
    double lowest_grade = 20;
    double highest_grade = 0;
    double average;

    for (int i = 0; i < num_grades; i++) {
        std::cout << "Enter grade " << i+1 << ": ";
        std::cin >> grades[i];

        if (grades[i] < 0 or grades[i] > 20) {
            std::cout << "Grade out of range, grades are only between 0 and 20." << std::endl;
            return 1;
        }
        else {average += grades[i];}
    }
    average /= num_grades;

    for (int grade : grades) {
        if (lowest_grade > grade) {
            lowest_grade = grade;
        }
        if (highest_grade < grade) {
            highest_grade = grade;
        }
    }

    std::cout << "Average: " << average << std::endl;
    std::cout << "Minimum grade: " << lowest_grade << std::endl;
    std::cout << "Maximum grade: " << highest_grade << std::endl;

    // show the grades above average
    std::cout << "Grades above average: ";
    for (int i = 0; i < num_grades; i++) {
        if (grades[i] > average) {
            std::cout << grades[i] << " ";
        }
    }

    return 0;
}