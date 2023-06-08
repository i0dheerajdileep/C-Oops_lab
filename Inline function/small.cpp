
//take two numbers and return the smaller one
#include<iostream>
using namespace std;
inline int small(int a, int b ,int c)
 {
   return (a<b)?((a<c)?a:c) : ((b<c)? b :c);
 }

 int main()
 {
  int a,b,c;
  cout<<"Enter three numbers";
  cin>>a;
  cin>>b;
  cin>>c;
  cout<<"THe smalest number is"<<small(a,b,c);
 }
  
