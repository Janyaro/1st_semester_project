/*Task # 14: Write a program that prints the designation of the employee according to their pay 
scale:
10000 –20000 Manager Operations
20000 –30000 Manager
30000 –40000 Area Manager
40000 –50000 Regional Manager
*/
#include<iostream>
using namespace std;
int main()
{
	string desig;
	int x;
	string s[4]={"Manager Operatios","Manager","Area Manager","Regional Manager"};
	for(int i=0;i<4;i++)
	{
		cout<<i+1<<" "<<s[i]<<endl;
	}
	cout<<endl<<"Select your choice: ";
	cin>>x;
	cout<<"\nPay scale is: "<<endl<<endl;
	switch(x)
	{
		case 1:
			cout<<"10000-20000";break;
		case 2:
			cout<<"20000-30000";break;
		case 3:
			cout<<"30000-40000";break;
		case 4:
		cout<<"40000-50000";break;					        	
	}
	return 0;
}