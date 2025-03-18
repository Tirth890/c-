#include <iostream>
using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    do {
        
        cout << "\nArithmetic Operations Menu";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. percentage";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
                case 5:
                cout << "percentage" << endl;
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
