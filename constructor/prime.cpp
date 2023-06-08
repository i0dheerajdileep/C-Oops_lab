//create a class prime with two data members , number and is_prime.if the number is prime , then is_prime=1 else 0.
//create two objects of the class prime and initial the data members using appropriate constructor
//display the onject using member functon.
#include<iostream>
using namespace std;
class Prime{
	private:
		int number,is_prime;
	public:
		Prime()
		{
		 int flag;
		 cout<<"Enter the number";
		 cin>>number;
		 for(int i=number-1;i>1;i--)
		  {
		   if(number%i==0)
		    {
		     flag=1;
		     break;
		    }
		   } 
		   if(flag)
		    is_prime=0;
		   else
		    is_prime=1;
		 }
		 ~Prime()
		 {
		  cout<<"\ndestroyed";
		 }
		 void put_data()
		 {
		  cout<<"The number= "<<number<<" is_prime= "<<is_prime;
		  //if(is_prime)
		  //cout<<" prime";
		  //else
		  //cout<<" not prime";
		 }
	};
int main()
{
 Prime P;
 P.put_data();
 
 return 0;
}
 
		
