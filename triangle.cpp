
 /*
 * Student Name: [Mfonobong Iniobong Tommy]
 * Matric Number: [2025/A/CYB/0609]
 * Department:cybersecurity
 * Email:m.tommy2480@miva.edu.ng

#include <iostream>
using namespace std;

int main() {
    double angle1, angle2, angle3;

    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;

    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        cout << "Invalid angles! A valid triangle cannot be formed." << endl;
    } else {
        angle3 = 180 - (angle1 + angle2);
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "The triangle is a right-angled triangle." << endl;
        } else {
            cout << "The triangle is NOT a right-angled triangle." << endl;
        }
    }

    return 0;
}