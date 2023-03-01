//Task # 5: Consider the following char array.
//char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk";
//
//Write a c++ program that travers the array and counts and displays the total number of characters in the array.

#include<iostream>
using namespace std;
int main() {
	char characters[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	int count=sizeof(characters)/sizeof(char);
	cout<<"\n\n\nAccessing of array means traverse is\n ";
	for(int i=0;i<count;i++) {
		cout<<characters[i];	
	}
	cout<<endl<<"\n\n\nTotal Characters is  "<<count<<"\n\n\n";
}

