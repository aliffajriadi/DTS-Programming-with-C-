#include <iostream>
#include <string>
#include <cmath> // untuk pow()

int solve_bin_to_dec(const std::string& binaryString) {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    int result = 0;
    int n = binaryString.length();

    for (int i = 0; i < n; i++) {
        char c = binaryString[i];
        if (c == '1') {
            result += std::pow(2, n - 1 - i);
        }
    }

    return result;
}

int main() {
    std::cout << "Enter a binary number: ";
    std::string binaryString;
    std::cin >> binaryString;
    std::cout << solve_bin_to_dec(binaryString) << std::endl;

    return 0;
}
