#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Set up input file and getline string
    std::ifstream file("./position.txt");
    std::string str;

    const int ASCII_DIFF = 48; // difference between each integer and its ASCII value, type cast to int converts a char to ASCII
    int x, y = 0;              // x is horizontal pos, y is depth
    int aim = 0;               // Not sure why, but the "aim" declaration had to be done separately to properly assign a value of 0

    // Iterate over each line of the position.txt file
    while (std::getline(file, str)) {
        if (str[0] == 'f') {
            int change = (int)str[8] - ASCII_DIFF;
            x += change;       // first character 'f' means forward, change in horizontal pos. is at index 8 of the line
            y += aim * change; // increases depth by (change in horizontal pos. * aim)
        }
        else if (str[0] == 'u') {
            aim -= (int)str[3] - ASCII_DIFF; // first character 'u' means up, change in aim is at index 3 of the line
        }
        else if (str[0] == 'd') {
            aim += (int)str[5] - ASCII_DIFF; // first character 'd' means down, change in aim is at index 5 of the line
        }
    }

    std::cout << "Final horizontal position multiplied by final depth gives: " << x * y << std::endl;
}