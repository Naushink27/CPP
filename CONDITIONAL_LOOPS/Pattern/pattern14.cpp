/*
A
B B
C C C

 */
#include<iostream>
using namespace std;
int main(){
int row;
cout<<"Enter number of rows"<<endl;
cin>>row;
int i=1;
while(i<=row){
  int j=1;
  
  while(j<=i){
   char ch= 64+i;
    cout<<ch;
    j++;
   
  }
  
  cout<<endl;
i++;
}


}