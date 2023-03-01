//Task # 12: Write a program that incorporates a function that insert values in an array.
//Insert function should have two arguments: Array and Data.

#include<iostream>
using namespace std;
const int size=5;
int InsertFunction(int Ar[]);
int main() {			int Arr[size];cout<<"Enter 5 Elements of Array\n";
	for(int i=0;i<size;i++) {
		cin>>Arr[i];
	}
	InsertFunction(Arr);
}
int InsertFunction(int Ar[])
{cout<<"Given Array is: ";
	for(int i=0;i<size;i++) {
		cout<<Ar[i]<<"\t";
	}
}









