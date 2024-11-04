#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows"<<endl;
    cin>>row;
    int i=0;
    while(i<row){
        int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/* 
 1 2 3
 1 2 3
1 2 3
 */