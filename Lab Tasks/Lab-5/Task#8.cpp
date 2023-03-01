/*Task # 8 Write a program that prints the table of number 5 up to 15 (i.e 1*5=5 ……… 15*5=75)*/
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=15;i++)
	{
		if(i<=9)
		    cout<<"0"<<i<<"*5  = "<<5*i<<endl<<endl;
		else if(i>9)
			cout<<i<<"*5  = "<<5*i<<endl<<endl;
	}
}