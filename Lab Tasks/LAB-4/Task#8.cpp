/*Task # 8 Write a Program named Address.CPP. An address has
• Student Name
• a house number,
• a street,
• an optional apartment number,
• a city,
• a state and a
• postal code.
Supply values at runtime: and print the address with the street on one line and the city, state, and 
postal code on the next line.*/
#include<iostream>
using namespace std;
int main()
{
	string name,cityname,state,address;
	string houseNo,streetNumber,ApartNum,postalcode;	
	cout<<"Enter Student's Name: ";
	getline(cin,name);
	cout<<"\nEnter House number: ";
	getline(cin,houseNo);
	cout<<"\nEnter street number: ";
	getline(cin,streetNumber);
	cout<<"\nEnter apartment number: ";
	getline(cin,ApartNum);
	cout<<"\nEnter City Name: ";
	getline(cin,cityname);
	cout<<"\nEnter State: ";
	getline(cin,state);
	cout<<"\nEnter Postal code: ";
	getline(cin,postalcode);
	cout<<"\n\n\n\t\tAddress Of Student\n\n";
	cout<<"Student's Name:"<<name<<endl;
	cout<<"House number:"<<houseNo<<" street number: "<<streetNumber<<" apartment number: "<<ApartNum<<endl;
	cout<<cityname<<" "<<state<<" Postal Code:"<<postalcode;
	return 0;
}
