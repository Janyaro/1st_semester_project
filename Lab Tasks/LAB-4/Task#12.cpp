/*Task # 12 Write a C++ program that takes a single character as input and tells whether it is a 
vowel or a consonant. (Use Switch Statement)*/
#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter any character: ";
	cin>>x;
	cout<<endl;
	switch(x){
		case 'a':
			cout<<"It's a vowel";break;
        case 'e':
			cout<<"It's a vowel";break;
		case 'i':
			cout<<"It's a vowel";break;
		case 'o':
			cout<<"It's a vowel";break;
		case 'u':
			cout<<"It's a vowel";break;
		case 'A':
			cout<<"It's a vowel";break;
		case 'E':
			cout<<"It's a vowel";break;
		case 'I':
			cout<<"It's a vowel";break;
		case 'O':
			cout<<"It's a vowel";break;
		case 'U':
			cout<<"It's a wovel";break;
		default:
		    cout<<"It's a Consonant";break;	}
	return 0;
}
