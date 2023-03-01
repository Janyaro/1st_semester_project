/*PF-Lab5-Tasks
Task # 2: Generate a series of Odd numbers and even numbers (up to 20) using for  loop.

Expected output 

Odd		  even
1         2
3		  4
*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"Odd:\t\tEven:\n";
	for(int x=1;x<=40;x++)
	{
		cout<<x<<"\t\t";
		if(x%2==0)cout<<endl;		
	}
	return 0;
}