#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
        ifstream file("test.txt");
        string line;

        while (getline (file, line)) {
                for (char c : line){
                        if ( 32 < int(c) &&  int(c) < 126){
                                std::cout << c;
                        }
                }
        file.close();
}}