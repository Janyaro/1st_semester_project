/*Task #2: A student will not be allowed to sit in exam if his/her attendance is less than 75%.
Take following input from user:
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include<iostream>
using namespace std;
int main()
{
	float x,y;
	float z;
	cout<<"Number of classes held: \n";
	cin>>x;
	cout<<"Number of classes attended: \n";
	cin>>y;
	if(y>x)
	{
		cout<<"Incorrect Input!!\n";
		return 0;
	}
	z=y/x*100.0;
	cout<<"Percentage of classes attended "<<(float)z<<"%\n\n";
	if(z>=75)cout<<"You are allowed to sit in the exam";
	else
	cout<<"You are not allowed to sit in the exam";
	return 0;	
}