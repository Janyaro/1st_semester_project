/*Task # 10: Write a c++ program that accepts three numbers and prints "All numbers are equal" 
if all three numbers are equal*/
#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Enter number 1: ";
	cin>>x;
	cout<<"Enter number 2: ";
	cin>>y;
	cout<<"Enter number 3: ";
	cin>>z;
	if(x==y && y==z)
	    cout<<"All numbers are equal";
	
	else 
	    cout<<"Numbers are not equal";	
	return 0;
}
