/*
- - - 1 - - -
- - 1 2 1 - -
- 1 2 3  2 1 - 

*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int i=1;
    while (i<=row)
    {
         int space= row-i;
         //First triangle (Spaces)
 while(space){
    cout<<" ";
    space--;
 }
 //Second triangle
 int j=1;
 while(j<=i){
    cout<<j;
    j++;
 }
 //third traingle
 int start=i-1;
 while(start){
    cout<<start;
    start--;
 }
 cout<<endl;
 i++;
    }
    

}