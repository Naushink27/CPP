#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

/*
1
2 2
3 3 3
4 4 4 4

*/