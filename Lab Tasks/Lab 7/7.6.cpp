//Task # 6: Write a c++ progam that demonstrates the concept / use of value and reference arguments. 
//(Document the program with suitable comments. Use comments to Explain the lines of code)

#include<iostream>
using namespace std;
int cube(int x);
int main()
{int x;
cube(x);cout<<endl<<"x= "<<x<<" in main function";//  Here value of x is 0 because it isnt
 												  //copies the same value as in user defined
												  //function. Here,we cant provide the value
												  // of x. So, Here x is by default 0   

}
int cube(int x)
{cout<<"Enter Number To find Cube"<<endl;cin>>x;
cout<<"x= "<<x<<" in user.defined function";}//  Here value of x is user defined      
									       	
	 //...PASSING ARGUMENT BY REFERENCE
/*#include<iostream>
using namespace std;
int cube(int& x);
int main()
{int x;
cube(x);cout<<endl<<"x= "<<x<<" in main function";//  Here value of x is also user defined 
                                                  //  because it copies the same value as 
												  //  the user provides in user defined 
												  //  function. Here,x is same as user 
												  //  defined x ..
}
int cube(int& x)
{cout<<"Enter Number To find Cube"<<endl;cin>>x;
cout<<"x= "<<x<<" in user.defined function";}*/   //  Here value of x is user-defined  
