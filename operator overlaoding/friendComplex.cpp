// + operator overloading using friend function
#include<iostream>
using namespace std;
class Complex{
	private : int real;
		  int img;
	public  : int getNumber();
		  int putNumber();
		  friend Complex operator +(Complex c1,Complex c2);
};
int Complex::getNumber(){
	cout<<"Enter the real number";
	cin>>real;
	cout<<"Enter the complex number";
	cin>>img;	
	return 0;
}

int Complex::putNumber(){
	cout<<"The number is"<<real<<"+"<<img<<"i";
	return 0;
}
Complex operator +(Complex c1,Complex c2){
	Complex C;
	C.real = c1.real+c2.real;
	C.img = c1.img+c2.img;
	return C;

}

int main(){
	Complex C1,C2,C3;
	C1.getNumber();
	C2.getNumber();
	C3 = C1+C2;
	C3.putNumber();
	return 0;
}


