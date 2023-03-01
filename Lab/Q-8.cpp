/*
1.	Write C++ code to make a class that contains a member function that takes two integers as arguments and returns their Sum. The program checks to ensure that: The First number is an Odd number and the second number is an Even number. The program also checks to ensure that both numbers are positive and greater than zero. The program also checks to ensure that: the first number is greater than the second number.
*/
#include<iostream>
using namespace std;
class sum{	
	private:
		int num1;
		int num2;
	public:
		void getsum(int,int );
		void showdata();
		
};
int main(){
	sum s;
	int x,y;
	cout<<"Enter number 1 "<<endl;
	cin>>x;
	cout<<"Enter number 1 "<<endl;
	cin>>y;
	s.getsum(x,y);
	s.showdata();
	
}
void sum::showdata(){
	if(num1%2==0&&num2%2>=1){
	
		if(num1>0&&num2>=0){
			if(num1>num2)
		cout<<"the sum of the number is "<<num1+num2;
			else 
			cout<<"First number always greater than second number ";
}
	else 
	
	cout<<"Both number must be greater than 0";
}
	
		
	else 	
	cout<<"First number must even and second number must be odd";		
	}

void sum::getsum(int a,int b){
	num1=a;
	num2=b;
}



