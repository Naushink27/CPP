/*
A B C
D E F 
G H I

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
        cout<<ch <<" ";
        ch++;
        j++;
    }
    cout<<endl;
    i++;
  
}

}