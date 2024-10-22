/* Concept - Parametric Polymoprphism
				DataType Parameterization
				TypePaarameter - > variables -> DataType Placeholder
C++ building Block - Template
*/

#include <iostream>
using namespace std;

template <typename inpIsInt>

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

void bubbleSort(inpIsInt arr[], int n) {
    // Loop through all elements of the array
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                inpIsInt temp = arr[j];
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

template <typename inpIsDoble>

void printArray(inpIsDoble arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Array with elements as integer datatype
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray<int>(arr, n);
    bubbleSort<int>(arr, n);

    cout << "Sorted array: \n";
    printArray<int>(arr, n);

   // Array with elements as double data type
    double arr1[] = {64.5, 34.5, 25.6, 12.3, 22.3, 11.2, 90.1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original double array: \n";
    printArray<double>(arr1, n1);
    bubbleSort<double>(arr1, n1);

    cout << "Sorted double array: \n";
    printArray<double>(arr1, n1);

    return 0;
}

	
