//calulate the area and perimeter of the circle
#include<iostream>
using namespace std;
inline int area(int r)
 {
   return 3.14*r*r;
 }
inline int peri(int r)
 {
   return 2*3.14*r;
 }
 int main()
 {
  int r,choice,key;
  cout<<"Enter the radius of the circle";
  cin>>r;
  cout<<"What do you want to find\npress 1 for area\npress 2 for perimeter";
  cin>>choice;
  choice==1 ? cout<<"The area is "<<area(r) : cout<<"THe perimeter is "<<peri(r);
  return 0;
 }
  
