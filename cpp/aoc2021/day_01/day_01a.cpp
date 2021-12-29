#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Set up input file and getline string
    std::ifstream file("./depths.txt");
    std::string str;

    // Create previous/next variables and counter for larger scope
    std::getline(file, str);
    int prev = std::stoi(str); // Set to first depth
    int next = prev; // Prepare for first comparison in while loop below
    int counter = 0;

    // Compare every two depths back-to-back and add to counter if next value is greater than the previous one
    while (std::getline(file, str)) {
        prev = next;
        next = std::stoi(str);

        if (next > prev) {
            counter++;
        }
    }

    std::cout << "Increased " << counter << std::endl;
}