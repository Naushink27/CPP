/*
1
12
123
345
4567

*/

// #include<iostream>
// using namespace std;
// int main()
// {
//  int rows;
//  cout<<"Enter number of rows"<<endl;
//  cin>>rows;
//  int i=1;
//  while(i<=rows){
//     int j=1;
//     int count=i;
//     while(j<=i){
//            cout<<count;
//            j++;
//            count++;
//     }
//     cout<<endl;
//     i++;
//  }
// }
// without using count variable;
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows" << endl;
    cin >> rows;
    
    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            cout << (i + j - 1); // Use (i + j - 1) to get the same sequence as `count`
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
