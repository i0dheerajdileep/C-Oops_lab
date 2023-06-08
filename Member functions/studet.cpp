//take the details of the student and print it using member function
#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		int sub1,sub2,sub3;
		int total;
		char grade;
	public :
		int getstudent();
		int getgrade();
		int putstudent();
};
int Student::getstudent(){
	cout<<"Enter the name of the student\n";
	cin>>name;
	cout<<"Enter the roll no of the student\n";
	cin>>roll_no;
	cout<<"Enter the mark of sub1 of the student\n";
	cin>>sub1;
	cout<<"Enter the mark of sub2 of the student\n";
	cin>>sub2;
	cout<<"Enter the mark of sub3 of the student\n";
	cin>>sub3;
	return 0;
}
int Student::getgrade(){
 	total=sub1+sub2+sub3;
 	if(total>=100)
 	grade='A';
 	else if(total>=75 && total<100)
 	grade = 'B';
 	else
 	grade = 'C';
 	return 0;
 }
 int Student::putstudent(){
 	cout<<"The name of the student is"<<name<<"\n";
 	cout<<"The roll no   student is"<<roll_no<<"\n";
 	cout<<"The mark of sub1 is "<<sub1<<"\n";
 	cout<<"The mark of sub2 is"<<sub2<<"\n";
 	cout<<"The mark of sub3 is"<<sub3<<"\n";
 	cout<<"The total mark is"<<total<<"\n";
 	cout<<"The grade is"<<grade<<"\n";
 	return 0;
 	}
 int main(){
 	Student S;
 	S.getstudent();
 	S.getgrade();
 	S.putstudent();
 	return 0;
 	}
 	
