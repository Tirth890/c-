// q1
// #include <iostream>
// using namespace std;

// void findNegativeElements(int arr[], int size) {
//     cout << "Negative elements in the array: ";
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     findNegativeElements(arr, size);
//     return 0;
// }


// q2

// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3] = {
//         {2, 7, 1},
//         {3, 5, 4},
//         {8, 9, 6}
//     };

//     int largest = a[0][0];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (a[i][j] > largest) {
//                 largest = a[i][j];
//             }
//         }
//     }

//     cout << "The largest element in the array is: " << largest << endl;

//     return 0;
// }

// q3
// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 3, cols = 3;
    
//     int a[rows][cols] = {
//         {2, 4, 1},
//         {3, 5, 4},
//         {8, 2, 6}
//     };

//     int transpose[cols][rows];

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = a[i][j];
//         }
//     }

//     cout << "Original array:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Transpose of the array:" << endl;
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// q4

#include <iostream>
using namespace std;

int main() {
    int rows, cols;


    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }


    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
