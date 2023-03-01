/*Task # 4: Consider Task=#1 and separate vowels and consonants.
Expected Output 
Vowels		Consonants
A			      B
E			      C
			      D      

*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"Vowel\t\tConsonant\n";
	cout<<"A\t\tB\n";
	cout<<"E\t\tC\n";
	cout<<"I\t\tD\n";
	cout<<"O\t\tF\n";
	cout<<"U\t\tG\n";
    for(int i=71;i<=90;i++)
	{
      if(i==65 || i==69 || i==73 || i==79 || i==85)
	  {
	    continue;
	  }
      else
        cout<<"\t\t"<<(char)i<<endl;	
    }





}