/*Task #13
If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)*/
#include<iostream>
using namespace std;
int main(){
	int x=2,y=5,z=0;
	bool a;
	a=(x==2)?true:false;
	cout<<"a. Value of x==2 is: "<<a;
	a=(x!=5)?true:false;
	cout<<"\nb. Value of x!=5 is: "<<a;
	a=(x!=5&&y>=5)?true:false;
	cout<<"\nc. Value of x!=5 && y>=5 is: "<<a;
	a=(z!=0||x==2);
	cout<<"\nd. Value of z!=0 || x==0 is: "<<a;
	a=(!(y<10))?true:false;
	cout<<"\ne. Value of !(y<10) is: "<<a;
	return 0;
}