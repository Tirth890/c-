// #include <iostream>
// using namespace std;

// void findMinMax(int arr[], int size, int &min, int &max) {
//     min = arr[0];
//     max = arr[0];
    
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
// }

// int main() {
//     int size;
//     cout << "Enter the number of elements in the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
    
//     int min, max;
//     findMinMax(arr, size, min, max);
    
//     cout << "Minimum value: " << min << endl;
//     cout << "Maximum value: " << max << endl;
    
//     return 0;
// }


// q2


// #include <iostream>
// using namespace std;

// int sumEvenIndexElements(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i += 2) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int size;
//     cout << "Enter the number of elements in the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
    
//     int sum = sumEvenIndexElements(arr, size);
    
//     cout << "Sum of elements at even indexes: " << sum << endl;
    
//     return 0;
// }


// q3

#include <iostream>
using namespace std;

int sumEvenIndexElements2D(int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];
    cout << "Enter the elements of the 2D array: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    int sum = sumEvenIndexElements2D(arr, rows, cols);
    
    cout << "Sum of elements at even indexes: " << sum << endl;
    
    return 0;
}
