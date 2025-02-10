#include <iostream>
using namespace std;

int main() {
    char letter = 'a';  // Starting letter

    do {
        cout << letter << " ";  // Print the current letter
        letter += 4;  // Skip 3 letters (i.e., increment by 4)
    } while (letter <= 'z');  // Continue until 'z'

    return 0;
}
