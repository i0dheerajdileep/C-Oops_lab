//create a class joint account with data members account number , name , phone number and balance.acc_no and balance are shared data members.create two objects of the class using appr. constructors and perform transactions(deposit and withdrawal) using member functions.
#include<iostream>
using namespace std;
class Joint_acc{
	private:
		string name;
		int phn_no;
		static int acc_no,balance;
		
	public:
		Joint_acc()
		{
		 cout<<"Enter your name";
		 cin>>name;
		 cout<<"Enter your phone number";
		 cin>>phn_no;
		}
		void deposit()
		{
		 int money;
		 cout<<"\nHow much money you need to deposit\n";
		 cin>>money;
		 balance=balance+money;
		 cout<"money succesfully deposited";
		 cout<<"Your balance is"<<balance;
		}
		void withdraw()
		{
		 int money;
		 cout<<"\nHow much money you need to withdraw\n";
		 cin>>money;
		 balance=balance-money;
		 cout<"money succesfully withdrawn";
		 cout<<"Your balance is"<<balance;
		}
		static void put_data()
		{
		 cout<<"\nBalance"<<balance<<"\n";
		 cout<<"Acc no is "<<acc_no<<"\n";
		}
		~joint_acc()
};
int Joint_acc :: acc_no=123213;
int Joint_acc :: balance=700;
int main()
{
 Joint_acc J1;
 Joint_acc J2;
 Joint_acc::put_data();
 J1.deposit();
 J2.withdraw();
 Joint_acc::put_data();
 return 0;
}
