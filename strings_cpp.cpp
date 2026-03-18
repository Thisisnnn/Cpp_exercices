#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int main, char* argv[]) {
        string line;
        string characters;
        ifstream file(argv[1]);
        if (!file) {  
                cout << "File doesn't exist." << endl;          
        }
        else{
        while (getline (file, line)) {
                for (char c : line){
                        if ( 32 < int(c) && int(c) < 126 ){
                                characters += c;
                                }
                        else{
                                if (characters.length() > 3){
                                        std::cout << characters << "\n" << std::endl;
                                        characters.clear();
                        }
                        }
                }
        if (characters.length() > 3){
                std::cout << characters << "\n" << std::endl;
                characters.clear();
        file.close();
        return 0;
        }
        }
}
}