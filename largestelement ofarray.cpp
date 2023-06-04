#include <iostream>

// Function to find the largest element in an array
int findLargestElement(int arr[], int size) {
    int largest = arr[0];  // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // Update the largest element
        }
    }

    return largest;
}

int main() {
    int array[] = {10, 5, 25, 15, 30};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the function and store the result
    int largestElement = findLargestElement(array, size);

    // Output the result
    std::cout << "The largest element in the array is: " << largestElement << std::endl;

    return 0;
}

