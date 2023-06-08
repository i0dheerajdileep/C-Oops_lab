//program to create a account and do the fucntions withdraw  deposit,interest,display
#include<iostream>
#include<string.h>
using namespace std;
class Account{
	private : 
	        string cust_name;
	        int acc_no;
	        string acc_type;
	        int balance;
 	public  :
 		int create();
 		int deposit();
 		int withdraw();
 		int interest();
 		int display();
};
int Account::create()
{
    cout<<"Enter the name of the customer";
    cin>>cust_name;
    cout<<"Enter the account number";
    cin>>acc_no;
    cout<<"Enter the type of of account";
    cin>>acc_type;
    cout<<"Enter the balance";
    cin>>balance;
    return 0;
 }
 int Account::deposit()
 {
    int money;
    cout<<"Enter the money you want to deposit";
    cin>>money;
    balance=balance+money;
    cout<<"money deposted in the account\nThe new balance is\t"<<balance;
    return 0;
 }
 int Account::withdraw()
 {
   int money;
   cout<<"Enter the amount you need to withdraw";
   cin>>money;
   if(balance-money>=500)
   {
    balance=balance-money;
    cout<<"money withdrawn\nThe new balance is\t"<<balance<<"\n";
   }
   else
   cout<<"THE MINIMUM BALANCE MUST BE 500";
   return 0;
 }
  int Account::interest()
  {
   int year,roi,final_bal,interest;
   cout<<"Enter the nuber of year";
   cin>>year;
   cout<<"Enter the rate of interest";
   cin>>roi;
   interest=(balance*year*roi)/100;
   cout<<"The simple interest is \t"<<interest;
   return 0;
  }
  int Account::display()
  {
   cout<<"The customer name is /t"<<cust_name<<"\n";
   cout<<"The Account number is /t"<<acc_no<<"\n";
   cout<<"The  Type of account is /t"<<acc_type<<"\n";
   cout<<"The balance is /t"<<balance<<"\n";
   return 0;
  }
  int main()
  {
   Account A;
   int choice=1;
   while(choice!=0)
   {
    cout<<"Press 1 for creation\nPress 2 for deposit\npress 3 for withdraw\npress 4 for interest\npress 5 for display\nPress 0 for exit";
    cin>>choice;
    switch(choice)
    {
     case 1: A.create();
     	     break;
     case 2: A.deposit();
     	     break;
     case 3: A.withdraw();
     	     break;
     case 4: A.interest();
     	     break;
     case 5: A.display();
     	     break;
     case 0: exit(0);
     default : cout<<"Enter a vald input";
     	       break;
    }
   }
   return 0;
   }

   
