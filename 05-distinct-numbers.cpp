#include <iostream>

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    
    int numbers[10];  
    int size = 0;    
    int input[10];    

    std::cout << "Enter ten integers: ";
    
    for (int i = 0; i < 10; i++) {
        std::cin >> input[i];
    }

    for (int i = 0; i < 10; i++) {
        bool found = false;
        for (int j = 0; j < size; j++) {
            if (input[i] == numbers[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            numbers[size] = input[i];
            size++;
        }
    }

    std::cout << "The number of distinct numbers is " << size << std::endl;
    std::cout << "The distinct numbers are: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i];
        if (i < size - 1) std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}
