/*
D
C D
B C D
A B C D

 */
#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    
    int i = 0;  // Row counter (start from 0 to print correct starting characters)
    
    while (i < row) {
        char ch = 'A' + row - i - 1;  // Starting character for each row
        
        // Print characters for the current row
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;  // Move to the next character
        }
        
        cout << endl;  // Move to the next line after printing one row
        i++;  // Increment row counter
    }

    return 0;
}
