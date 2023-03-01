//Task # 10: Create an array that can hold Five names, and get input (names)from the user. Display those names on the screen, 
//and then prompt the user for a name. Search for that name through the array, and determines that name is FOUND or NOT.. 

#include<iostream>
#include<string>
using namespace std;

const int size=5;
int main() {	string searchfor;int found=0;
	string name[size];
	for(int j=0;j<size;j++) {
		cout<<"Enter name "<<j+1<<endl;cin>>name[j];
	}
	for(int i=0;i<size;i++) {
		cout<<"Name "<<i+1<<" is "<<name[i]<<endl;
	} 
	cout<<"enter a name"<<endl;
	cin>>searchfor;
	for(int k=0;k<size;k++) {
	if (searchfor==name[k])
	found=1;
	else
	cout<<"";
	}
if(found==1)
cout<<"Well, Found."<<endl;
else
cout<<"Sorry, Not Found";
}
