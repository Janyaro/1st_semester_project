/*Task #1: Write C++ program to allow the user to input his/her age. Then the program will show 
if the person is eligible to vote. A person who is eligible to vote must be older than or equal to 18 
years old.
Expected Output
Enter your age: 18
You are eligible to vote*/

#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter your age: ";
	cin>>x;
	if(x>=18)cout<<"You are eligible to vote.";
	else
	cout<<"You are ineligible to vote.";
	return 0;
}