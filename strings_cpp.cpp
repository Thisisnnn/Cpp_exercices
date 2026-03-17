#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
        ifstream file("test.txt");
        string line;

        // Use a while loop together with the getline() function to read the file line by line
        while (getline (file, line)) {
        // Output the text from the file
        cout << line;

        file.close();
}}