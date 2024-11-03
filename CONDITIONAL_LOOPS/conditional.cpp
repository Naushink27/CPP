#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin >> a;
    cout<< "Enter the value of b"<<endl;
    cin >> b;
    cout << "value of a:" << a<<"and value of b:" << b<<endl;
    if(a>0&& b>0){
        cout<<"Both are positive"<<endl;

    }
    if(a>0&&b<0){
        cout<<a <<"is positive"<<b<<"is negative"<<endl;
    }
       if(a<0&&b>0){
        cout<<b <<"is positive"<<a<<"is negative"<<endl;
    }
    if(a<0&&b<0){
        cout<<a <<","<<b<<"Both are negative"<<endl;

    }
    return 0;
}
