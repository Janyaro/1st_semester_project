//Task # 4: Write a function called swap() that interchanges two int values passed to it by the calling program.

#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int num1,num2;
	swap(num1,num2);
}
int swap(int Num1,int Num2)
{
	cout<<"Enter 1st Number "<<endl;  cin>>Num1;
	cout<<"Enter 2nd Number "<<endl;  cin>>Num2;
	int temp=Num1;
	Num1=Num2;Num2=temp;
	cout<<"Swapping of 1st Number is "<<Num1<<endl;
	cout<<"Swapping of 2nd Number is "<<Num2<<endl;
}
