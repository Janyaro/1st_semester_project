/*Task # 3: Write a program that accepts three numbers from the user and prints "increasing" if the 
numbers are in increasing order, "decreasing" if the numbers are in decreasing order.
Test Data
Input first number: 15
Input second number: 25
Input third number: 35 */
#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Enter number 1: \n";
	cin>>x;
	cout<<"Enter number 2: \n";
	cin>>y;
	cout<<"Enter number 3: \n";
	cin>>z;
	if(x>y&&y>z)cout<<"Numbers are in decreasing order";
	else if(z>y&&y>x)cout<<"Numbers are in increasing order";
    else 
    cout<<"Three numbers must be different and should be in any order either decreasing or increasing";
	return 0;
}