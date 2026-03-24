#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

int main(int main, char *argv[])
{
    std::string line;
    int num;
    std::ifstream file(argv[1]);
    if (!file)
    {
        std::cout << "File doesn't exist." << std::endl;
    }
    else
    {
        while (getline(file, line))
        {
            for (char c : line)
                if (isprint(c))
                    std::cout << std::hex << (int)c << std::endl;
        }
    }
    return 0;
}