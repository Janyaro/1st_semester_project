//Task # 2: Make  a functions that asks for first and last name, the function then concatenates 
//both the first and last name, returns and prints on screen. (use return type to accomplish the task) 

#include<iostream>
using namespace std;
string function(string,char,string);
int main()
{string FirstName,LastName;char ch;
	cout<<function(FirstName,ch,LastName);
}
string function(string FirstName,char ch,string LastName)
{
	cout<<"Enter First Name "<<endl;getline(cin,FirstName);
	cout<<"Enter Last Name "<<endl;getline(cin,LastName);
	return FirstName+ch+LastName;
}
