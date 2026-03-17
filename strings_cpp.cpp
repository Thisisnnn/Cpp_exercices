#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
        string line;
        string characters;
        ifstream file("test.txt");
        if (!file) {  
                cout<<"File doesn't exist.";          
        }
        else{
        while (getline (file, line)) {
                for (char c : line){
                        if ( 32 < int(c) && int(c) < 126 ){
                                characters += c;
                                }
                        else{
                                if (characters.length() > 3){
                                        std::cout << characters << "\n";
                                        characters.clear();
                        }
                        }
                }
        if (characters.length() > 3){
                std::cout << characters << "\n";
                characters.clear();
        file.close();
        return 0;
        }
        }
}
}