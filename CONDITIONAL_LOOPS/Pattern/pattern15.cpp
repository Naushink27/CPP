/*
A
B C
D E F

 */
#include<iostream>
using namespace std;
int main(){
int row;
cout<<"Enter number of rows"<<endl;
cin>>row;
int i=1;
 char ch=65;
while(i<=row){
  int j=1;
 
    while(j<=i){
   
    cout<<ch;
    j++;
     ch++;
  }


  cout<<endl;
i++;
}


}
