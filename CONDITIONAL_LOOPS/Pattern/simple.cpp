#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows"<<endl;
    cin>>row;
    int i=0;
    while(i<row){
         int j=0;
         while(j<row){
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;
    }
    }
    /*
    * * *
    * * *
    * * *
    
    */