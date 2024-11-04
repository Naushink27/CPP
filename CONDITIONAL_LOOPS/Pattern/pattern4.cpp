#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    int i=1;
    int count=1;
    while(i<=rows){
        int j=1;
        while (j<=rows)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/* 
 1 2 3
 4 5 6
 7 8 9
 */