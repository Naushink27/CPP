/*
1 1 1 
  2 2
    3
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter  number of rows"<<endl;
    cin>>row;
    int i=1;
    int count=1;
    while(i<=row){
        int space=i-1;
         while(space){
            cout<<" ";
            space--;
         }
         int j=1;
        
          while(j <= row - i + 1) {
            cout << count;
            j++;
        }
         cout<<endl;
         count++;
         i++;
    }
}