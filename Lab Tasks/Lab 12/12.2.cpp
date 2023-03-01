//Task # 4 For the following Base classes. Provide suitable sub class of your own choice.
//Some examples of Base classes.
//1.Students 2. Bank account  3. Employees  4. Vehicle
#include<iostream>
using namespace std;
class bankaccount{
	private:
		string name;
		int id;
	public:
	void setdetail(){
		cout<<"Enter name :";
		getline(cin,name);
		cout<<"Enter id :";
		cin>>id;
	}
	void getdetail(){
		cout<<"The name is "<<name<<endl;
		cout<<"the id is "<<id<<endl;
	}		
};
class employee:public bankaccount{
	private:
		string accountno;
	public:
		void setdetail(){
			bankaccount::setdetail();
			cout<<"Enter account number";
			getline(cin,string );
			
		}
		void getdetail(){
			bankaccount::getdetail();
			cout<<"The account number is "<<accountno<<endl;
		}
};

int main(){
	employee e1;
	e1.setdetail();
	e1.getdetail();
	return 0;
}
