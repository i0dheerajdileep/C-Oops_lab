//create a class date with with date month year, using operator overloading  , extraction(cout<<) insertion(cin>>)
//Take an array and make the elements negative 
//take each month has 30 days
#include<iostream> 
using namespace std;
class Date{
	private : int day;
		  int month;
		  int year;
	public  : friend istream & operator >>(istream &in , Date &C){
			cout<<"Enter the day";
			in>>C.day;
			cout<<"Enter the month";
			in>>C.month;
			cout<<"Enter the year";
			in>>C.year;
			return in;
		  }
		  friend ostream & operator <<(ostream &out ,const Date &C){
			out << C.day<<"/"<<C.month<<"/"<<C.year;
			return out;
		  }
		  void operator -(){
			if(day!=1)
			{
			  day = day-1;
			}
			else if(day==1 && month!=1)
			{
			  day=30;
			  month = month-1;
			}
			else
			{
			  day=30;
			  month=12;
			  year = year-1;
			}
		}
};
int main(){
	Date N;
	cin>>N;
	-N;
	cout<<N;
	return 0;
}


