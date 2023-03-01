//Task # 1 Create a class having 4 functions, add, sub, muland div. Each function accepts 2 parameters and returns the sum, difference, multiplication and division of these numbers
//Create a main class having main function that uses the above class.

#include<iostream>
using namespace std;
struct Employee
{
	int number;
	float salary;
};
int main()
{
	Employee first,second;
	cout<<"Enter Employee 1 Data:\n";
	cout<<"Employee 1 Number:\n";cin>>first.number;
	cout<<"Employee 1 Salary:\n";cin>>first.salary;
	cout<<"Enter Employee 1 Data:\n";
	cout<<"Employee 2 Number:\n";cin>>second.number;
	cout<<"Employee 2 Salary:\n";cin>>second.salary;
	
		cout<<"Employee 1 Number is:\t";cout<<first.number;
		cout<<"\nEmployee 1 Salary is:\t";cout<<first.salary;
		cout<<"\nEmployee 2 Number is:\t";cout<<second.number;
		cout<<"\nEmployee 2 Salary is:\t";cout<<second.salary;
}
