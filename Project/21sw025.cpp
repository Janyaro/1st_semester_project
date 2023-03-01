#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;

//class declare 

class student{
	    private:
	    string rollno;
	    string name;
	int calculus,programing,iict,english,physics;
	    double average;
	    char grade;   
		int age;
		string  gender,department;
		string  contact;
		
	public:
		void student_record();
		void setmarks();
		void setrecord();
		void marksdetail();
		void calculator();
	    void add_student();
	    void delete_student();
	    void delete_record();
	    void new_record();
	    
};




int main(){
	string username;
	int password;
	cout<<"\n\n\n\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  "<<endl;
			cout<<"\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ "<<endl;
			cout<<"\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ "<<endl;
			cout<<"\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| "<<endl;
 
 
 cout<<"\t\t\t press any key to continue ";
 getch();
 system("cls");
 
 char yesno;
 	do{
 			
      student s1;
		int choice ;
	    string file;
		string select;
		 cout<<endl<<"\t\t         ************************************\n\n";
		cout<<"\t\t          |   1:Add student record           |\n\n"<<endl;
	    cout<<"\t\t          |   2: Add student marks           |\n\n"<<endl;
		cout<<"\t\t          |   3:Disply student recorde       |\n\n"<<endl;
		cout<<"\t\t          |   4:Disply student marks         |\n\n"<<endl;
		cout<<"\t\t          |   5:Delete all student record    |\n\n"<<endl;
		cout<<"\t\t          ************************************|"<<endl;
		cout<<"Select option :"<<endl;
		cin>>choice;
		switch(choice){
			case 1: 
			system("cls");
			cout<<"Enter user name :"<<endl;
			cin.ignore();
			getline(cin,username);
			cout<<"enter password"<<endl;
			cin>>password;
			if(username=="waseem"&&password==123){
			system("cls");
			s1.setrecord();
			
 
 
 }
			else 
			cout<<"Try again";
			break;
            case 2:
            	
            	
            system("cls");

cout<<"Enter user name :"<<endl;
			cin.ignore();
getline(cin,username);

			cout<<"enter password"<<endl;
			cin>>password;
			if(username=="waseem"&&password==123){
           system("cls");
		    s1.setmarks();
            }
			break;
			
			
			case 3:
				
				system("cls");
			cout<<"Enter user name :"<<endl;
			cin.ignore();
			
			getline(cin,username);
			cout<<"enter password"<<endl;
			cin>>password;
			if(username=="waseem"&&password==123){
			system("cls");
				s1.student_record();
				}
			break;
			case 4:
	          system("cls");
				cout<<"Enter user name :"<<endl;
			cin.ignore();
				getline(cin,username);
			cout<<"enter password"<<endl;
			cin>>password;
			if(username=="waseem"&&password==123){
				system("cls");
              s1.marksdetail();
	}
			break;
			case 5:
				system("cls");
				cout<<"Enter user name :"<<endl;
			cin.ignore();
			getline(cin,username);
			cout<<"enter password"<<endl;
			cin>>password;
			if(username=="waseem"&&password==123){
			system("cls");
            
			cout<<"Which file you want to delete (record/marks) ";
			cin.ignore();
            getline(cin,file);
            if(file=="record"){
			s1.delete_record();
}
			else if(file=="marks")
			{
            	s1.delete_student();
			
			
			}else 
			cout<<"File doesnot exist "; 
			}
			break;
			default: 
			cout<<"Choose the above option ";}
		
			cout<<"\n\nDo you want to select another option (y/n): ";//<<icon[1]
	cin>>yesno;	
system("cls");
}while(yesno == 'Y'|| yesno == 'y'); 
// set record

}
void student::setrecord(){
	ofstream outp;
	outp.open("record.txt",ios::out|ios::app);
cout<<"Enter student roll_number :"<<endl;
cin>>rollno;
cout<<"Enter student name :"<<endl;
cin.ignore();
getline(cin,name);
cout<<"Enter age :"<<endl;
cin>>age;
cout<<"Enter gender :"<<endl;
cin.ignore();
getline(cin,gender);
cout<<"Enter department name :"<<endl;
getline(cin,department);
cout<<"Enter contact number  :"<<endl;
getline(cin,contact);
//set file in file
outp<<"\n\n"; 
outp<<"\t\t\t Roll number  :"<<rollno<<endl;
outp<<"\t\t\t Name  :"<<name<<endl;
outp<<"\t\t\t Age  :"<<age<<endl;
outp<<"\t\t\t Gender  :"<<gender<<endl;
outp<<"\t\t\t Department name   :"<<department<<endl;
outp<<"\t\t\t contact number  :"<<contact<<endl;
cout<<"\n\n";
outp.close();
}



// calucate marks


void student::setmarks()
{
cin.ignore();    
	cout<<"Enter student name:"<<endl;
	getline(cin,name);

	cout<<"Enter student Roll number :"<<endl;
	getline(cin,rollno);
	cout<<"Enter marks in calculus :"<<endl;
	cin>>calculus;
	cout<<"Enter marks in programming :"<<endl;
	cin>>programing;
	cout<<"Enter marks in IIct :"<<endl;
	cin>>iict;
	cout<<"Enter marks in English :"<<endl;
	cin>>english;
	cout<<"Enter marks in physics :"<<endl;
	cin>>physics;
	calculator();
	ofstream out;
	out.open("data.txt");
	{
		out<<"\n\n";
	out<<"\t\t\tRoll number of student :"<<rollno<<endl;
	out<<"\t\t\tName of student is :"<<name<<endl;
	out<<"\t\t\tEnglish :"<<english<<endl;
	out<<"\t\t\tclaculus  :"<<calculus<<endl;
	out<<"\t\t\tphysics :"<<physics<<endl;
	out<<"\t\t\tIIct :"<<iict<<endl;
	out<<"\t\t\tprogramming :"<<programing<<endl;
	out<<"\t\t\tAverage marks :"<<average<<endl;
	out<<"\t\t\tgrade  is :"<<grade<<endl;	
	}   
} 


//calculater 

void student::calculator(){
	average=calculus+programing+iict+english+physics/5.0;
	if(average>=90)
	grade='A';
	if(average>=75)
	grade='B';
	if(average>=50)
	grade='C';
	else
	grade='F';
}


//  see marks with the help of file

void student::marksdetail(){
		ifstream out;
		out.open("data.txt");
		while(out.eof()==0){
			string s;
			getline(out,s);
			cout<<s<<endl;
		}
		out.close();
}
//see student recorde 

void student::student_record(){
		ifstream out;
		out.open("record.txt");
		while(out.eof()==0){
			string s;
			getline(out,s);
			cout<<s<<endl;
		}
		cout<<endl;
		out.close();
}


void student::delete_student(){
	int status;
	status=remove("mark.txt");
	if(status==0)
	cout<<"data cleared ";
	else 
	cout<<"wrong method" ;
}

void student::delete_record(){
	int status;
	status=remove("record.txt");
	if(status==0)
	cout<<"data cleared ";
	else 
	cout<<"wrong method" ;
}

