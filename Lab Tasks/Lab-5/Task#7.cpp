/*Task # 7: Write a program called SumAndAverage to produce the sum of 1, 2, 3, ..., to 100. Also compute and display the average.
The output shall look like:
The sum is 5050
The average is 50.0
*/
#include<iostream>
using namespace std;
int main()
{
	int x,y,z=0;
	cout<<"Enter number of terms: ";
	cin>>x;
	y=x*(x+1)/2;
    cout<<"\nSum of the first "<<x<<" Natural numbers is: "<<y<<endl;
    cout<<"\naverage is: "<<(float)y/x;
	return 0;	
}