/*
A B C
A B C
A B C

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
  while(j<=row){
  char ch ='A'+i+j-2;
    cout<<ch;
    j++;
  }
  cout<<endl;
i++;
}


}