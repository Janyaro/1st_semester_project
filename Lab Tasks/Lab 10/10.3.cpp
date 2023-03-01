//Task # 3 
//Create an employee class. The member should comprise an int for storing the employee number, 
//and float for the employee’s salary. Member functions should allow the user to enter this data and display it. 
//Write a main() function that allows the user to enter data for three employees and display it.

#include<iostream>
using namespace std;
class employee{
	public:
		unsigned long number;
		float salary;
	void getdata(){
		cout<<" \nEnter employee number";cin>>number;
		cout<<"\n e\Enter employ salary";cin>>salary;
		
	}	
	void showdata(){
		cout<<"\nemploy number is"<<number;
		cout<<"\n employ salary is"<<salary;
	}
};

int main(){
        employee emp1,emp2,emp3;
        emp1.getdata();
        emp2.getdata();
        emp3.getdata();
cout<<"\nemployee 1\n"   ;
         emp1.showdata();
cout<<"\nemployee 2\n";
        emp2.showdata();
cout<<"\nemploye 3";
        emp3.showdata();

	
}

