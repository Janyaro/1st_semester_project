/*Task # 3: Write a program that prints all Roll numbers of your class using for loop. 
Output should be as :
20SW01     
20SW02
20SW03
…..
…
20SW10
20SW11 
and so on.
*/
#include<iostream>
using namespace std;
int main()
{
	for(int x=1;x<=20;x++)
	if(x<10)
	{
	    cout<<"21SW0"<<x<<endl<<endl;
	}
	else
	{
	    cout<<"21SW"<<x<<endl<<endl;
	}
	return 0;
}
