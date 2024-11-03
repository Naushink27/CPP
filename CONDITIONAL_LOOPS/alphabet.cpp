#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch>64&&ch<91){
        cout<<ch<<"is UpperCase Character"<<endl;
            }
    else if(ch>96&&ch<123){
        cout<<ch<<"is LowerCase Character"<<endl;
    }
    else if(ch>47 && ch<58){
        cout<<ch<<"is Numeric  value"<<endl;
    }
    else{
        cout<<ch<<"is Not define"<<endl;
    }
}