#include <iostream>
#include <fstream>
#include <string>

int main (int main, char* argv[]) {
        std::string line;
        std::string characters;
        std::ifstream file(argv[1]);
        if (!file) {  
                std::cout << "File doesn't exist." << std::endl;          
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