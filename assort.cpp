#include <iostream>
using namespace std;

void findNegativeElements(int arr[], int size) {
    cout << "Negative elements in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findNegativeElements(arr, size);
    return 0;
}