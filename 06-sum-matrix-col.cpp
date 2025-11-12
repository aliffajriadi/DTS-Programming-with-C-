#include <iostream>
#include <iomanip> // optional: untuk format angka

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    double matrix[3][SIZE]{};

    std::cout << "Enter a 3-by-4 matrix row by row: " << std::endl;

    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < SIZE; j++)
        std::cout << "Sum of the elements at column " << j
                  << " is " << sumColumn(matrix, 3, j) << std::endl;

    return 0;
}
