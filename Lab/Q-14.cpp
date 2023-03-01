/*
7.	A company has following details of their employees in the file 'emp.txt'  

a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age

Write a C++ program to read the above file. Create new file such as Adm.txt, Sal.txt, Pro.txt, IT.txt respectively to store the employee details according to their department.

*/

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdlib>
#include<fstream>

using namespace std;
char empfile[30]   = "Employee.txt";
char ITfile[20]    = "IT.txt";
char Adminfile[25] = "Admin.txt";
char Prodfile[30]  = "Production.txt";
char Salesfile[30] = "Sales.txt";

class emp
{
     int empid;
     char name[30];
     char address[60];
     int age;
     public:
          char dept[15];
     void get();
     char *getdept()
     {
          return dept;
     }
};
void emp::get()
{
     cout<<"\n Enter Employee Id     :  ";
     cin>>empid;
     cout<<"\n Enter Name            :  ";
     cin>>name;
     cout<<"\n Enter Address         :  ";
     cin>>address;
     cout<<"\n Enter Department Name:(Admin/Sales/IT/Production)  :  ";
     cin>>dept;
     cout<<"\n Enter Age   :  ";
     cin>>age;
}
void insert()
{
     emp e;
     
     ofstream fout; //ofstream is a class, fout is its object. It can be used only to write into the file.

     
     fout.open("Employee.txt",ios::in | ios::out | ios::app | ios::ate);
     
     if (fout.fail())
     {
          cout<<"\n Unable to Open the File!!!";
          goto err;
     }
     e.get(); 
     fout.write((char *)&e,sizeof(e)); 
     if(fout.tellp()%sizeof(e)==0)
     {
          cout<<"\n Record Inserted !!!"<<endl;
     }
     else
     {
          cout<<"\n Insertion Failed !!!";
          goto err;
     }
     err:
          fout.close();
        
}
void sort() 
{
     emp e;
     ofstream adm,sal,pro,it; 
    
     ifstream fin; 
     adm.open(Adminfile,  ios::app);
     sal.open(Salesfile,  ios::app);
     pro.open(Prodfile, ios::app);
     it.open(ITfile,  ios::app);
     fin.open(empfile, ios::app);
     while(fin.read((char *)&e,sizeof(e))) 
     {
          if(strcmp(e.getdept(),"Admin")==0)
          {
               adm.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into ADMIN File!!!";
          }
          else if(strcmp(e.getdept(),"Sales")==0)
          {
               sal.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into SALES File!!!";
          }
          else if(strcmp(e.getdept(),"IT")==0)
          {
               it.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into IT File!!!";
          }
          else if(strcmp(e.getdept(),"Production")==0)
          {
               pro.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into Production File!!!";
          }
          else
               cout<<"\n Insert Correct Record!!!";
     }
     fin.close();
     adm.close();
     sal.close();
     it.close();
     pro.close();
}
int main()
{
     
          insert();
     
     
     sort();
     return 0;
}



