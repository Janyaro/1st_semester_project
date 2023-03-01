/*
2.	Write a C++ class that contains a member function that takes an integer as an argument and display its table from 1 to 10, when the Tab key will be pressed.
*/

#include<iostream>
#include<conio.h>
using namespace std;
class table{
	private :
		int num;
	public:
		void settable(int x){
			num=x;
		}
		void gettable(){
          char tab = getch();
          if(tab == '\t') {
//		  }cout<<"TAB TAB"<<endl;
				for(int i=1;i<10;i++)
				cout<<i*num<<endl;}
				}
};
int main(){
	table t;
	int number;
	cout<<"Enter any number :";
	cin>>number;
	t.settable(number);
	t.gettable();
}
