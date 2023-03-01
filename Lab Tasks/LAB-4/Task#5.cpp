/*Task # 5: Write a C++ program that takes a line of text from the user and prints only the first word.
Example: Line Entered Programming Fundamentals in C++
Output should be 
First word: Programming
*/
#include<iostream>
using namespace std;
int main()
{
    string s;
	cout<<"Enter any sentence: \n";
	cin>>s;
	cout<<"First word is: "<<s;
	return 0;
}
