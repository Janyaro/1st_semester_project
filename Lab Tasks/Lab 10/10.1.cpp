//Task # 1 
//Create a class having 4 functions, add, sub, muland div. Each function accepts 2 parameters and returns the sum, difference, multiplication and division of these numbers
//Create a main class having main function that uses the above class.

#include<iostream>
using namespace std;
class calculator{
	public:
		int add(int n1, int n2){
		                return n1+n2	;
		}
		int sub(int n1,int n2){
			return n1-n2;
		}
		int mul(int n1,int n2){
			return n1*n2;
		}
		int div(int n1,int n2){
			return n1/n2;
		}};
int main(){
	calculator c1;
	cout<<"\n addition";
	cout<<c1.add(3,2);
	cout<<"\n subtractionn";
	cout<<c1.sub(3,2);
	cout<<"\n multiplication";
	cout<<c1.mul(3,2);
              cout<<"\n division";
cout<<c1.div(4,2);}

