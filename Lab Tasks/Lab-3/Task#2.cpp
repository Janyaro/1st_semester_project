/*
Lab#3
Task#2
Get any statement from user when pogram is running and print that staement
*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter any statement:\n";
	getline(cin,s);
	cout<<endl<<s;
	return 0;
}