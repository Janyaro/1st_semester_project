
/*Task # 6: Write a C++ program that takes two characters as input and display all the characters between these two characters.
And also count the number of characters
Test data
Enter first character: d
Enter second character: p
Expected output
Characters between ‘d’ and ‘p’ are: e f g h i j k l m n o 
and Characters count : 11
*/
#include<iostream>
using namespace std;
int main()
{	
	int count=0;
	char x,y;
	cout<<"Enter any character less than z: ";
	cin>>x;
	if(x=='z')
	{
	    cout<<"Error!";
		return 0;
	}
	cout<<"Enter second character greater than first one: ";
	cin>>y;
	if((int)x>=(int)y)
	{
	    cout<<"Error!";
		return 0;
	}
	cout<<"\nCharacters between these two character(s) is/are: \n";
	for(int i=(int)x+1;i<(int)y;i++)
	{
	    ++count;
	    cout<<(char)i<<"  ";
	}
	cout<<"\nNumber of character(s) is/are: "<<count;
}