#include <filesystem>
#include <fstream>
#include <iostream>

int main(){
    int lineCount = 0;
    int wordCount = 0;

    std::ifstream file("text.txt");
    if (!file.is_open()) {
        std::cout << "Error opening the file";
        return 1;
    }

    int size = std::filesystem::file_size("text.txt");

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        lineCount +=1;

        bool inWord = false;
        for (char c : line) {
            if (std::isspace(c)) {
                inWord = false;
            } 
            else if (!inWord) {
                inWord = true;
                wordCount++;
        }
}
    }
    std::cout << "-------" << std::endl;
    std::cout << "Lines: " << lineCount << std::endl;
    std::cout << "Words: " << wordCount << std::endl;
    std::cout << "Characters: " << size << std::endl;
    file.close();
    return 0;
}