/*Concept - Parametric Polymoprphism
				DataType Parameterization
				TypePaarameter - > variables -> DataType Placeholder

C++ building Block - Template
*/


#include <iostream>
using namespace std;

template <typename T>

// void bubbleSort(int arr[], int n) {
//     // Loop through all elements of the array
//     for (int i = 0; i < n - 1; ++i) {
//         // Last i elements are already in place, so no need to check them
//         for (int j = 0; j < n - i - 1; ++j) {
//             // Swap if the element found is greater than the next element
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

void bubbleSort(T arr[], int n) {
    // Loop through all elements of the array
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

template <typename T>

void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

   // Example with a different type
    double arr1[] = {64.5, 34.2, 25.1, 12.0, 22.3, 11.9, 90.8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original double array: \n";
    printArray(arr1, n1);

    bubbleSort(arr1, n1);

    cout << "Sorted double array: \n";
    printArray(arr1, n1);

    return 0;
}

	
