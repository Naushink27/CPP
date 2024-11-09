/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of Rows: ";
    cin >> row;

    int i = 1;
    while (i <= row) {
        // First triangle: numbers from 1 to (row - i + 1)
        int j = 1;
        while (j <= (row - i + 1)) {
            cout << j << " ";
            j++;
        }

        // Second triangle: stars, i - 1 times
        int start = i - 1;
        while (start) {
            cout << "* ";
            start--;
        }
        //third triangle
         int srt=i-1;
        while (srt)
        {
          cout<<"*"<<" ";
          srt--;
        }
        // Third triangle: numbers from (row - i + 1) down to 1
        int k = row - i + 1;
        while (k >= 1) {
            cout << k << " ";
            k--;
        }

        cout << endl;  // Move to the next row
        i++;
    }

    return 0;
}
