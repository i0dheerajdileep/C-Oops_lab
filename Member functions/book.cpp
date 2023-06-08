//take the detals of the book and print it using member function
#include<iostream>
using namespace std;
class Book{
	private : 
	        string title;
	        string genre;
	        string author;
	        int no_of_page;
	        int price;
 	public  :
 		void getbook()
 		{
 		 cout<<"Enter the number title"<<"\n";
 		 cin>>title;
 		 cout<<"Enter the number genre"<<"\n";
 		 cin>>genre;
 		 cout<<"Enter the number author"<<"\n";
 		 cin>>author;
 		 cout<<"Enter the number no of pages"<<"\n";
 		 cin>>no_of_page;
 		 cout<<"Enter the price"<<"\n";
 		 cin>>price;
 		}
 		void putbook()
 		{
 		 cout<<"The title of the book is\n"<<title<<"\n";
 		 cout<<"The genre of the book is\n"<<genre<<"\n";
 		 cout<<"The author of the book is\n"<<author<<"\n";
 		 cout<<"The no of pags  of the book is\n"<<no_of_page<<"\n";
 		 cout<<"The price of the book is\n"<<price<<"\n";
 		}
 	};
 int main()
   {
 	Book B;
 	B.getbook();
 	B.putbook();
     return 0;
   }
 	
 		 
