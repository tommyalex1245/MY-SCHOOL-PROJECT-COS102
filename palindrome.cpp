// Student Name: [Mfonobong Iniobong Tommy]
// Matric Number: [2025/A/CYB/0609]
// Department: cybersecurity
// Email: m.tommy2480@miva.edu.ng


#include <iostream>
using namespace std;

int main() {
    int num, original, reversed_num = 0, digit;

    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0) {
        cout << num << " is NOT a palindrome." << endl;
    } else {
        original = num;

        while (num > 0) {
            digit = num % 10;
            reversed_num = (reversed_num * 10) + digit;
            num = num / 10;
        }

        if (original == reversed_num) {
            cout << original << " is a palindrome." << endl;
        } else {
            cout << original << " is NOT a palindrome." << endl;
        }
    }

    return 0;
} 
