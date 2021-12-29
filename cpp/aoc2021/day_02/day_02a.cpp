#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Set up input file and getline string
    std::ifstream file("./position.txt");
    std::string str;

    const int ASCII_DIFF = 48; // difference between each integer and its ASCII value, type cast to int converts a char to ASCII
    int x, y = 0;              // x is horizontal pos, y is depth

    // Iterate over each line of the position.txt file
    while (std::getline(file, str))
    {

        if (str[0] == 'f')
        {
            x += (int)str[8] - ASCII_DIFF; // first character 'f' means forward, change in horizontal pos. is at index 8 of the line
        }
        else if (str[0] == 'u')
        {
            y -= (int)str[3] - ASCII_DIFF; // first character 'u' means up, change in depth is at index 3 of the line
        }
        else if (str[0] == 'd')
        {
            y += (int)str[5] - ASCII_DIFF; // first character 'd' means down, change in depth is at index 5 of the line
        }
    }

    std::cout << "Final horizontal position multiplied by final depth gives: " << x * y << std::endl;
}