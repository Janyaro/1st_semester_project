/*Task # 4: Write a program to check whether a entered character is lowercase (a to z ) or 
uppercase ( A to Z ). (You can use ASCII value to do so).*/
#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter any character: \n";
	cin>>x;
	int y=(int)x;
	if(y >= 65 && y <= 90)cout<<"It is a upercase character";
	else if(y>=97&&y<=122)cout<<"It is lowercase character";
	else
	cout<<"Character must be from English alphabet!";
	return 0;
}