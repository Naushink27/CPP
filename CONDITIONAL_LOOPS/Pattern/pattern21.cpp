/*
- - - 1
- - 2 2
- 3 3 3
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
        int space=row-i;
         while(space){
            cout<<" ";
            space--;
         }
         int j=1;
        
         while(j<=i){
              cout<<count;
              j++;
         }
         cout<<endl;
         i++;
         count++;
    }
}