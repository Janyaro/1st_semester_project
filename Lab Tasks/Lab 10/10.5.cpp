//Task # 5 
//Demonstrate the use of the following: 
//Constructor 
//Access specifiers  private and public. 
//Set() and ge() functions.
//static class members.

#include<iostream>
using namespace std;
class intro{
	public:
		intro(){
			cout<<" Hello Everyone";
		}
};
int main(){
	intro i; //when we made object so constructor is called
	
	
}
//Task 5(set and get functions) 
//#include<iostream>
//using namespace std;
////definition of class
//class person{
//               private:
//               //data member to store the name of person	
//	string name;
//	public:
//		//member function define insde the class under the public so accces in main program
//		void setname(string n){
//			name=n;
//			
//		}
//		string getname(){
//			return name;
//		}};
//int main(){
//	//creating an object for person class
//    person p1;
//    //calling the member  functin
//    p1.setname("Abdullah");//member function setname holds an arfument to pass
//   cout<<" nameis"<< p1.getname();}
//task 5(access specifier public and private)
//#include<iostream>
//using namespace std;
//class A{
//	private:
//		int privateA;
//	public:
//	             int publicA;
//	             	
//};
//class B:public A{
//	public:
//		void func(){
//			int a;
//			a=privateA;
//			a=publicA;
//		}
//};
//class C: private A{
//	public:
//		void func(){
//			int a;
//			a=privateA;
//			a=publicA;
//			
//		}
//};
//int main(){
//	int a;
//	B objB;
//	a=objB.privateA;//error:not accessible
//	a=objB.publicA;//ok(A Public to B)
//	
//	C objC;
//	a=objC.privateA;//error:not accessible
//	a=objC.publicA;//error: not accessible(A  Private to C)
//}
//Task 5(static class member)
//#include<iostream>// a static member function are only static values
//#include<conio.h>                      //static void disp (void);
//using namespace std;//how to call?
//  class test{                                 //test ::disp()
//  	private:
//  int no;
//  static int count;
//  public:             
//                     void setno(void);
//                     void dispno(void);
//                     static void  dispcount(void);
//      };
//     void test::setno(void){
//     	no=++count;
//     } 
//   void test:: dispno(void){
//     	cout<<"\nobj no"<<no;
//     }
//     void test::dispcount(void){
//     	cout<<"\n counter"<<count;
//     }
//     int test::count;
//int main(){
//	test t1,t2,t3;
//	t1.setno();
//	test::dispcount();
//	t2.setno();
//	test::dispcount();
//	t3.setno();
//	test::dispcount();
//	t1.dispno();
//	t2.dispno();
//	t3.dispno();
//	
//}
//
//	

