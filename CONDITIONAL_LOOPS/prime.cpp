#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=2;
    int cnt=1;
    if(n<=1){
        cout<<"Number is not Prime"<<endl;
    }
    else{
    while(i<n){
       if(n%i==0){
             cnt++;
       }
      
       i++;
    }
    
    if(cnt>2){
        cout<<"Number is not prime"<<endl;

    }
    else{
        cout<<"number is  prime"<<endl;
    }
    }
}