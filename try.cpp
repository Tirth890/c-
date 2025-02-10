
// q1
// #include <iostream>
// using namespace std;

// int main() {
//     char letter = 'a';  

//     do {
//         cout << letter << " ";
//         letter += 4;  
//     } while (letter <= 'z'); 

//     return 0;
// }

// Q1


//  q2
// #include <iostream>
// using namespace std;

// int main() {
//     long long number; 
//     int count = 0;

//     cout << "Enter a number: ";
//     cin >> number;
//     if (number == 0) {
//         count = 1;
//     } else {
        
//         while (number != 0) {
//             number /= 10; 
//             count++; 
//         }
//     }

//     cout << "Total number of digits: " << count << endl;

//     return 0;
// }

// Q3


#include <iostream>
using namespace std;

int sumFirstLastDigit(int number) {
    number = abs(number); // Handle negative numbers
    string numStr = to_string(number);
    int firstDigit = numStr[0] - '0';
    int lastDigit = numStr[numStr.length() - 1] - '0';
    return firstDigit + lastDigit;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sumFirstLastDigit(num);
    cout << "Sum of the first and last digit: " << result << endl;
    return 0;
}