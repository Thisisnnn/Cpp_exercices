#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

using namespace std;

int main (int main, char* argv[]) {
        string line;
        int num;
        ifstream file(argv[1]);
        if (!file) {  
                cout << "File doesn't exist." << endl;          
        }
        else{
        while (getline (file, line)) {
                cout << std::hex << line << endl;
                }
            }
        }