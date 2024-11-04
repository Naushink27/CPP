#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=0;
    int sumE=0;
    int sumO=0;
    while(i<=n){
        if(i%2==0){
            sumE+=i;
        
        }
        else{
            sumO+=i;
        }
        i++;
    }
    cout<<"Sum of Even number is:"<<sumE<<endl;
        cout<<"Sum of Odd number is:"<<sumO<<endl;

}