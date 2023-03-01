//Task # 9: write C++ code that creates a new char array of size 5 and copies the first 5 five character
//from the char array created in Task # 5 to this new created array, and display all five elements of the new array. 

#include<iostream>
using namespace std;

int main() {	
	char characters[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	int index;int size;
	size=sizeof(characters[size])/sizeof(int);
	char copiedcharacters[size];
	cout<<"copied characters are\n\n\n";
//	for(int i=1;i<size;i++)
	copiedcharacters[size]=characters[0];
	cout<<copiedcharacters;
}

