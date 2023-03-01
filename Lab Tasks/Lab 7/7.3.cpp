//Task # 3: Write a function called zeroSmaller() that takes two integer 				
//arguments by reference and then sets the smaller of the two 
//numbers to 0. Write a main function to exercise this function.

#include<iostream>
using namespace std;
int zerosmaller(int&,int&);
int main()
{int num1,num2;
	cout<<"Enter 1st Number "<<endl;cin>>num1;
	cout<<"Enter 2nd Number "<<endl;cin>>num2;
	cout<<"Smaller Number ";
	int result = ((num1<num2)?num1:num2); cout<<result<<" Now Becomes ";
	zerosmaller(num1,num2);
}
int zerosmaller(int& Num1,int& Num2)
{
	if (Num1>Num2)  {Num2=0;cout<<Num2;}
	else {Num1=0;cout<<Num1;}
}
