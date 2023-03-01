/*Task # 11: Write a program that declares an int variable, assign it a value of your choice. The 
program checks as:
if the number is even make it odd number.
if the number is odd prints its square. 
if the number is equal to 0 make it a double figure number and prints its cube*/
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter any integer number: ";
	cin>>a;
	if(a%2==0)
	{
        if(a!=0)
		    cout<<"It's odd equivalent will be :"<<a+1<<"  OR  "<<a-1;
        else if(a==0)cout<<"It's double figure number may be: 10"<<" and it's cube is: 1000";
    }
	else if(a%2==1 || a%2==-1)
	    cout<<"It's square is: "<<a*a;
	return 0;
}