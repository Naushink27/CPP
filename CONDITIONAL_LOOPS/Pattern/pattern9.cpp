/*
1
2 1
3 2 1

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
while(j<=i){
    cout<<i-j+1;
    j++;
}
cout<<endl;
i++;
}
}