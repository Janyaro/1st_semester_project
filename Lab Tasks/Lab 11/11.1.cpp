//Task # 1 Write a program with a mother class and an inherited daugther class. 
//Both of them should have a method void display() that prints a message 
//(different for mother and daugther).
//In the main define a daughter and call the display() method on it.

#include <iostream>
using namespace std;

class MyClass {
	public:
		void myMethod();
};

void MyClass::myMethod() {
	cout << "Hello World";
}

int main() {
	MyClass myObj;
	myObj.myMethod();
	return 0;	
}
