/*Task # 15: Develop a mark sheet application in C++ which fulfills the following requirements:
The program takes input from the user marks obtained in three subjects; C++, Functional English 
and EE.
• The program calculates the total marks obtained out of 300.
• Calculate the percentage.
• Display the grade secured according to the following:
90 > Grade: A
Between 90 and 80 Grade: B
Between 79 and 70 Grade: C
Between 69 and 60 Grade: D
Below 60 Grade: FAIL*/
#include<iostream>
using namespace std;
int main()
{
	float t,x,y,z,a=300;
	float per;
	string grade;
	 cout<<"Enter your obtained marks in C++ out of 100: ";
	 cin>>x;
	if(x>100)
	{
	    cout<<"You have entered incorrect marks in C++";return 0;
	}
	 cout<<"Enter your obtained marks in Functional English out of 100: ";
	 cin>>y;
	if(y>100)
	{
	    cout<<"You have entered incorrect marks in Functional English";return 0;
	}
	 cout<<"Enter your obtained marks in EE out of 100 : ";
	 cin>>z;	
	if(z>100)
	{
	 cout<<"You have entered incorrect marks in EE";return 0;
	}
	 t=x+y+z;
	 per=t/a*100.0;
	 	if(per>90)
	{
	    grade="A";
	}
	else if(per>=80 && per<=90 )
	{
	    grade="B";
	}
	else if(per>=70 && per<=79)
	{
	    grade="C";
	}
	else if(per>=60 && per<=69)
	{
	    grade="D";
	}
	else if(per<60)
	{
	    grade="FAIL";
	}
	 cout<<"\n\n\t\t\tMarks Certificate\n\n";
	 cout<<"_______________________________________________________________________"<<endl;
	 cout<<"Subject:\t\t\tObtained Marks:\t\tMaximum Marks:"<<endl<<endl;
	 cout<<"C++\t\t\t\t"<<x<<"\t\t\t100"<<endl<<endl;
	 cout<<"Functional English\t\t"<<y<<"\t\t\t100"<<endl<<endl;
	 cout<<"EE\t\t\t\t"<<z<<"\t\t\t100"<<endl<<endl;
	 cout<<"______________________________________________________________________"<<endl<<endl;
	 cout<<"Total Obtained Marks :"<<t<<endl;
	 cout<<"Total Marks : 300"<<endl;
	 cout<<"Percentage : "<<(float)per<<endl;
	 cout<<"Grade : "<<grade;
	return 0;
}
