/*Task #9: Take three numbers from the user and print the greatest number.
Test Data
Input the 1st number: 25
Input the 2nd number: 78
Input the 3rd number: 87
Expected Output: 
The greatest: 87
*/
#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Enter First Number: ";
	cin>>x;
	cout<<"\nEnter Second Number: ";
	cin>>y;
	cout<<"\nEnter Third Number: ";
	cin>>z;
	cout<<endl;
	if(x>y || x==y && x>z)
	{
	    cout<<"Greatest number is "<<x;
	}
	else if(x>z || x==z && x>y)
	{
	    cout<<"Greatest number is " <<x;
	}
	else if(y>x || y==x && y>z)
	{
	    cout<<"Greatest number is "<<y;
	}
	else if(y>z || y==z && y>x)
	{
	    cout<<"Greatest number is "<<y;
	}
	else if(z>y || z==y && z>x)
	{
		cout<<"Greatest number is "<<z;
	}
	else if(z>x || z==x && z>y)
	{
		cout<<"Greatest number is "<<z;
	}
	else if(x==y && y==z)
	{
		cout<<"Greatest number is "<<z;
	}
	return 0;
}

