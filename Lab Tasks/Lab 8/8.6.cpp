//Task # 6: Consider the char array created in Task# 5 write C++ code that determines and displays 
//the number of occurrences i.e how many times the character 'a' exists in the array. 

#include<iostream>
using namespace std;
int main() {	
	char searchfor;
	char characters[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	cout<<"Enter character to find between a to j"<<endl;cin>>searchfor;
	int count=sizeof(characters)/sizeof(char);
	int Found=0,i;
	for(i=0;i<count;i++) {
		if(searchfor==characters[i])
		Found++;
		else 
		cout<<"";
	}
	cout<<"Occurs "<<Found<<" times. ";
}

