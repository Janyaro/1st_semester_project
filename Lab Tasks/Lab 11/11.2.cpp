//Task # 2 Demonstrate the use of the following: 
//Access specifiers, private, public and protected.


/* 
#include <iostream>
using namespace std;
//Public Access Specifier
class MyClass {
	public:
		int x;
};

int main() {
	MyClass myObj;
	myObj.x = 15;
	
	cout << myObj.x;
	return 0;
}

*/


#include <iostream>
using namespace std;
// Private Access Specifier
class MyClass {
	public:
		int x;
	private:
		int y;
};

int main() {
	MyClass myObj;
	myObj.x = 25;
	myObj.y = 50;
	
	cout << myObj.x;
	cout << myObj.y;
	
	return 0;
	
}



