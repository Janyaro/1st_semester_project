/*
4.	Write a program using Object Oriented Programming concepts to calculate bonus of the employees' admin and salesman. The admin and salesman classes derives the information from class person. Create base and all derived classes having same member functions called getdata, display data and bonus. Calculates bonus of the specified employee.
*/

#include<iostream>
using namespace std;
class person{
	private:
		string name;
		string designation;
		int salary;
		double t_bonus;
	public:
			float c_bonus;
		void getdata(){
			
		cout<<"Enter Employee Name :"<<endl;
		getline(cin,name);
		cout<<"Enter salary :"<<endl;
		cin>>salary;
		cout<<"Enter designation (salesman/admin ):";
		cin.ignore();
	    getline(cin,designation);
//		cout<<"Enter bonous ";
//		cin>>c_bonus;
		}
		double bonus(){
			int amount=c_bonus/100*salary;
			t_bonus=amount+salary;
			return t_bonus;
		}
		void putdata(){
			cout<<"The name of the employee is "<<name<<endl;
			cout<<"The salray of the employee is "<<salary<<endl;
			cout<<"The designatin of the employee is "<<designation<<endl;
			cout<<"The salary after  bonus is "<<t_bonus<<endl;	
		}

};
class sales:public person{
	public:
		sales(){
			c_bonus=12;
		}
		void getdata(){
			person::getdata();
			person::bonus();
		}
		void putdata(){
			person::putdata();
		
		}
};
class admin :public person{
	public:
		admin(){
			c_bonus=10;
		}
		void getdata(){
			person::getdata();
			person::bonus();
		}
		
};
int main(){
	sales s;
	s.getdata();
	s.putdata();
	
	
	return 0;
}
 
