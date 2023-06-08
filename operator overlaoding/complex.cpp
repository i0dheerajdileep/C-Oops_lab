// use + operator overlaoding , take 2 complex numbers and add 
#include<iostream>
using namespace std;
class Complex{
	private : int real;
		  int img;
	public  : int getNumber();
		  int putNumber();
		  Complex operator +(Complex c2){
			Complex C;
			C.real = real+c2.real;
			C.img = img+c2.img;
			return C;	
		}
};
int Complex::getNumber(){
	cout<<"Enter the real number";
	cin>>real;
	cout<<"Enter the complex number";
	cin>>img;	
	return 0;
}

int Complex::putNumber(){
	cout<<"The number is"<<real<<"+"<<img;
	return 0;
}
int main(){
	Complex C1,C2,C3;
	C1.getNumber();
	C2.getNumber();
	C3 = C1+C2;
	C3.putNumber();
	return 0;
}


