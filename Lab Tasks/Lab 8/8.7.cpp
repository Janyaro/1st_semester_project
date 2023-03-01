//Task # 7: Consider the char array created in Task# 5 write C++ code that determines 
//and displays the index number where the character ' f ' exists for the First time in the array. 

#include<iostream>
using namespace std;
int main() {	
	char characters[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	int index;int size;
	int count=sizeof(characters)/sizeof(char);
	size=count-1;
	char searchfor='f';
	for(int i=size;i>=0;i--) {
		if (searchfor==characters[i])
		{index=i;}	
		else
		cout<<"";
	}
	cout<<"Found at index "<<index;
}

