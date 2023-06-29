#include <iostream>

void readMatrix(int** matrix, int rows, int columns) {
    std::cout << "Enter the matrix elements:" << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int columns) {
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int getRowSum(int* row, int columns) {
    int sum = 0;
    for (int i = 0; i < columns; i++) {
        sum += row[i];
    }
    return sum;
}

int getColumnSum(int** matrix, int rows, int columnIndex) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][columnIndex];
    }
    return sum;
}

void findLargestSum(int** matrix, int rows, int columns) {
    int largestRowSum = 0;
    int largestRow = -1;

    int largestColumnSum = 0;
    int largestColumn = -1;

    for (int i = 0; i < rows; i++) {
        int rowSum = getRowSum(matrix[i], columns);
        if (rowSum > largestRowSum) {
            largestRowSum = rowSum;
            largestRow = i;
        }
    }

    for (int j = 0; j < columns; j++) {
        int columnSum = getColumnSum(matrix, rows, j);
        if (columnSum > largestColumnSum) {
            largestColumnSum = columnSum;
            largestColumn = j;
        }
    }

    std::cout << "Row with the largest sum: " << largestRow << std::endl;
    std::cout << "Column with the largest sum: " << largestColumn << std::endl;
}

int main() {
    int m, n;
    std::cout << "Enter the number of rows: ";
    std::cin >> m;
    std::cout << "Enter the number of columns: ";
    std::cin >> n;

    // Dynamically allocate memory for the matrix
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    readMatrix(matrix, m, n);
    printMatrix(matrix, m, n);
    findLargestSum(matrix, m, n);

    // Deallocate memory for the matrix
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
