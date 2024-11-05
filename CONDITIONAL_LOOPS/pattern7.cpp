/*
1 
2 3
4 5 6
7 8 9 10 

*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    int count=1;
    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}