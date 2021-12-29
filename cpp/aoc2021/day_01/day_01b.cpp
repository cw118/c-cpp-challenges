#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // Create vector with integer depth values, reading and converting them from strings in depths.txt
    std::ifstream file("./depths.txt");
    std::string depth;
    std::vector<int> depths;

    while (std::getline(file, depth)) {
        depths.push_back(std::stoi(depth));
    }
    
    int counter = 0;

    // Between the current and next window, only one value changes: if current_sum = a + b + c, next_sum = b + c + d
    // Whenever d > a, next_sum will be greater than current_sum N, so only a and d need to be compared
    for (int i = 3; i < depths.size(); i++) {
        if (depths[i] > depths[i - 3]) { // a and d are always 3 apart in terms of the depth vector's indices
            counter++;
        }
    }

    std::cout << "Increased " << counter << std::endl;
}
