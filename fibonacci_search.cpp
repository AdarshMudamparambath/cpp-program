#include <iostream>

int min(int a, int b) {
    return (a <= b) ? a : b;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int fibonacciSearch(int arr[], int size, int key) {
    int fibMMinus2 = 0;
    int fibMMinus1 = 1;
    int fibM = fibMMinus1 + fibMMinus2;
    int offset = -1;

    // Find the smallest Fibonacci number greater than or equal to size
    while (fibM < size) {
        fibMMinus2 = fibMMinus1;
        fibMMinus1 = fibM;
        fibM = fibMMinus1 + fibMMinus2;
    }

    // Perform Fibonacci Search
    while (fibM > 0) {
        int i = min(offset + fibMMinus2, size - 1);

        // Comparison logic and adjustments
        if (arr[i] < key) {
            fibM = fibMMinus1;
            fibMMinus1 = fibMMinus2;
            fibMMinus2 = fibM - fibMMinus1;
            offset = i;
        } else if (arr[i] > key) {
            fibM = fibMMinus2;
            fibMMinus1 = fibMMinus1 - fibMMinus2;
            fibMMinus2 = fibM - fibMMinus1;
        } else {
            return i;  // Key found at index i
        }
    }

    // Check the last element separately
    return (fibMMinus1 && arr[offset + 1] == key) ? offset + 1 : -1;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int key;
    std::cout << "Enter the key to search: ";
    std::cin >> key;

    // Apply Fibonacci Search
    int result = fibonacciSearch(arr, size, key);

    // Output the result
    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
return 0;
}
