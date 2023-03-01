//Task # 5: Write a program that ask for two numbers, compare them and show the maximum. Declare a function called max_two that compares the numbers and returns the maximum.

#include<iostream>
using namespace std;
int max_two(int,int);
int main()
{int num1,num2;
	cout<<"Greater Number is  "<<max_two(num1,num2);
}
int max_two(int Num1,int Num2)
{
	cout<<"Enter 1st Number "<<endl;cin>>Num1;
	cout<<"Enter 2nd Number "<<endl;cin>>Num2;
	return ((Num1>Num2)?Num1:Num2);
}
