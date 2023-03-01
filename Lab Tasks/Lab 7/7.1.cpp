//Task # 1: Write a program that asks a name. Use your own function, that receives a string (name) 
//and prints on screen the hello message. (Doesn't returns anything- void type) 
//
//Test data :
//    What's your name
//  	Hello anyname 

#include<iostream>
using namespace std;
void name(string);
int main()
{
	name("name1");
}
void name(string name1){
	cout<<"What`s your Name"<<endl;getline(cin,name1);
	cout<<"Hello  "<<name1;
	}
