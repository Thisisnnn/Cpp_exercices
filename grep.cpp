#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <regex>
using namespace std;

int main(int main, char *argv[]){
    string line;
    string characters;
    ifstream file(argv[1]);
    regex word(argv[2]);
    smatch m;

    if (!file){
        cout << "File doesn't exist." << endl;
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
