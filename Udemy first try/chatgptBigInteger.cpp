#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string line;
    std::vector<long long> results;

    // Read input lines
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        long long num1, num2;

        // Extract two integers from the line
        if (iss >> num1 >> num2) {
            // Compute the difference
            long long difference = num1 - num2;
            // Store the result
            results.push_back(difference);
        }
    }

    for(long long diff:results){
        std::cout<<diff<<std::endl;
    }
        return 0;

    
}