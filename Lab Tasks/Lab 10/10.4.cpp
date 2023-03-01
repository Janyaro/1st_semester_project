//Task # 4 
//Create a class that includes a data member that holds a “Serial number” for each object created from the class. 
//That is, the first object created will be numbered 1, the second 2, and so on.

#include<iostream>
using namespace std;
class serialnum{
private:
 static int obj;
 int snum;
 public:
 
              serialnum(){
             	obj++;
             	snum=obj;
             }
             void display();
             
};
int serialnum::obj=0;
void serialnum::display(){
	cout<<" obj number"<<snum<<endl;
}
int main(){
	serialnum s1,s2,s3,s4;
	s1.display();
	s2.display();
	s3.display();
	s4.display();}

