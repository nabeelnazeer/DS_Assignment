#include <iostream>

void mergeArrays(int arr1[], int arr2[], int size, int result[]) {
    int i = 0;
    int j = size - 1;
    int k = 0;

    while (i < size && j >= 0) {
        if (arr1[i] > arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j--;
        }
        k++;
    }

    while (i < size) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j >= 0) {
        result[k] = arr2[j];
        j--;
        k++;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;
    int arr1[size] = {5, 3, 2, 1, 0};
    int arr2[size] = {9, 7, 6, 4, 2};
    int result[size * 2];

    mergeArrays(arr1, arr2, size, result);

    std::cout << "Merged and reversed array: ";
    printArray(result, size * 2);

    return 0;
}
//  Merged and reversed array: 5 3 2 4 6 7 9 2 1 0 