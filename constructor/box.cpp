//three types of constructor
#include<iostream>
 using namespace std;
 class Box{
 	private:
 		int l,b,h;
 	public:
 		Box()//default constructor
 		{
 		 cout<<"Enter the length";
 		 cin>>l;
 		 cout<<"Enter the breadth";
 		 cin>>b;
 		 cout<<"Enter the height";
 		 cin>>h;
 		}
 		Box(int x,int y,int z)//parameterised
 		{
 		 l=x;
 		 b=y;
 		 h=z;
 		}
 		Box(Box  &c)//copy
 		{
 		 l=c.l;
 		 b=c.b;
 		 h=c.h;
 		}
 		void find_vol()
 		{
 		 cout<<l*b*h<<"\n";
 		}
 		
 	};
 int main()
 {
  Box B;
  Box D(2,3,4);
  Box E(D);
  B.find_vol();
  D.find_vol();
  E.find_vol();
  return 0;
  }
