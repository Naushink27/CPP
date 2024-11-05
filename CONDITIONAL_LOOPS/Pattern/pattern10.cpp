/*
A A A
B B B
C C C
*/

#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"Enter the number of rows"<<endl;
cin>>rows;
int i=1;
char ch=65;
while(i<=rows){
    int j=1;
    while(j<=rows){
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
    ch++;
}

}