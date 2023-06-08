//Take an array and make the elements negative 
#include<iostream> 
using namespace std;
class Array{
	private : int a[10];
		  int n;
	public  : int getArray();
		  int putArray();
		  void operator -(){
			for(int i=0;i<n;i++)
			{
			  a[i]= -a[i];
			}
		}
};
int Array::getArray(){
	cout<<"Enter the number of elements";
	cin>>n;
	cout<<"Enter the array elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	return 0;
}

int Array::putArray(){
	cout<<"the negative array is";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
	return 0;
}
int main(){
	Array N;
	N.getArray();
	-N;
	N.putArray();
	return 0;
}


