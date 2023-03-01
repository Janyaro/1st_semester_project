/*
Lab#3
Task#3
Use any compound assignment operator to assign x a new value and then print new value of x
*/
#include<iostream>
using namespace std;
int main()
{
	int x=5,a;
	cout<<"Enter value of a: ";
	cin>>a;
	x+=a;
	cout<<"Value of x = "<<x;
	return 0;
	
}