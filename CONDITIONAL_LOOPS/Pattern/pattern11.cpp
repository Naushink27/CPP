/*
A B C
A B C 
A B C
*/

#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"Enter the number of rows"<<endl;
cin>>rows;
int i=1;

while(i<=rows){
    int j=1;
    char ch=65;
    while(j<=rows){
        cout<<ch;
        j++;
            ch++;
    }
    cout<<endl;
    i++;

}

}