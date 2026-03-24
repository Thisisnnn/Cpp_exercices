#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <regex>

int main(int main, char *argv[]){
    std::string line;
    std::string characters;
    std::ifstream file(argv[1]);
    std::regex word(argv[2]);
    std::smatch m;

    if (!file){
        std::cout << "File doesn't exist." << std::endl;
    }
    else{
        while (getline(file, line)){
            if (std::regex_search(line, m,  word)){
                std::cout << line << std::endl;
            }

    }
    file.close();
return 0;
}
}
