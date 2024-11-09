/**
 A 
 B C
 C  D E


 */
#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    // Outer loop for rows
    for (int i = 1; i <= row; i++) {
        // Inner loop to print characters in each row
        char ch = 'A' + i - 1; // Starting character of each row
        
        // Print each character for the current row
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++; // Move to the next character
        }

        cout << endl; // Move to the next line after printing one row
    }

    return 0;
}
