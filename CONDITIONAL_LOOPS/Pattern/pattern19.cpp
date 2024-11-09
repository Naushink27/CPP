/*
* * * *
- * * *
- - * *
- - - *
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter  number of rows"<<endl;
    cin>>row;
    int i=1;
    while(i<=row){
        int space=i-1;
         while(space){
            cout<<" ";
            space--;
         }
         int j=1;
        
          while(j <= row - i + 1) {
            cout << "*";
            j++;
        }
         cout<<endl;
         i++;
    }
}