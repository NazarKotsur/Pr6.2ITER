#include <iostream>
#include <climits>
#include <iomanip>

void fillArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(3) << arr[i] << " ";
    }
    std::cout << std::setw(3) << std::endl << std::endl;
}

int sumOddIndexedElements(const int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

void swapMinMax(int arr[], int size) {
    if (size <= 0) {
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        else if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    std::swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArray(arr, size);

    std::cout << "Array before swapping min and max elements:\n";
    printArray(arr, size);

    swapMinMax(arr, size);

    std::cout << "Array after swapping min and max elements:\n";
    printArray(arr, size);

    int result = sumOddIndexedElements(arr, size);
    std::cout << "Sum of elements with odd indices: " << result << std::endl;

    delete[] arr;

    return 0;
}
