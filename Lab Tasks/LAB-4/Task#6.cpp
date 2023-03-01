/*Task # 6: Write a C++ program that takes a single word from the user and prints only the first 
charcter .
Example: Line Entered Programming Fundamentals
Output should be 
First letter: P*/
#include<iostream>
using namespace std;
int main()
{
	string y;
	cout<<"Enter any word: \n";
	cin>>y;
	cout<<"First character you entered is: "<<y[0];
	return 0;
}