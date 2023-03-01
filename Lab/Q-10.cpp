/*

3.	C++ Program using structure to Store Information of 10 employees in a Structure array.
( Note: Declare at least four structure members of your own choice. Possible structure members can be Empno, Empname, etc.)
*/

#include<iostream >
using namespace std;
struct employee{
	string Empname;
	int Empno;
	string disignation;
};

int main(){
 
 employee e[10];
 
 for(int i=0;i<10;i++){
 	cout<<"Enter the detail of Employee "<<i+1<<endl;
 	cout<<"Enter Employee name :"<<endl;
 	cin.ignore();
 	getline(cin,e[i].Empname);
 	cout<<"Enter Employee number :"<<endl;
    cin>>e[i].Empno;
 	cout<<"Enter Employee disignation :"<<endl;
 	cin.ignore();
 	getline(cin,e[i].disignation);
 }
 	
	
	return 0;
}
