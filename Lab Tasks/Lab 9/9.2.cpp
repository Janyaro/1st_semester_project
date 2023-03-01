//Task # 2 
//Create a class called MyClass that has one int member. Include member functions to initialize it to 0, to initialize it to an integer value, to display it. 
//Write a program to test this class.

#include<iostream>
using namespace std;
struct Students
{
	int ObtainedMarks;
	int TotalMarks;
	
};
int main()
{
	Students First;char ch='%';
	cout<<"Enter Obtained Marks   \n";cin>>First.ObtainedMarks;
	cout<<"Enter Total Marks   \n";cin>>First.TotalMarks;
	float Per=First.ObtainedMarks*100/First.TotalMarks;
	cout<<"Percentage is: "<<Per<<ch;
}
