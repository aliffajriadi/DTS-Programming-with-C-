#include <iostream>

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    
    int numbers[10];   // Store distinct values
    int size = 0;      // Indicate how many distinct values are in the array numbers
    int input[10];     // Temporary array for input

    std::cout << "Enter ten integers: ";
    
    // Step 1: Baca 10 angka
    for (int i = 0; i < 10; i++) {
        std::cin >> input[i];
    }

    // Step 2: Simpan hanya angka yang belum pernah ada
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

    // Step 3: Tampilkan hasil
    std::cout << "The number of distinct numbers is " << size << std::endl;
    std::cout << "The distinct numbers are: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i];
        if (i < size - 1) std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}
