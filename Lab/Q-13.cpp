/*
6.	 Write a C++ program using Object Oriented Programming concepts to Input Votes for two candidates and find winner of the Election based on the received votes.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class vote{
	private:
		string  name;
	int vote_1=0,vote_2=0,selectcandidate;
	public:
		void election();
		void waseem();
        void zohaib();	
};
int main(){
	vote voter;
    
    voter.election();
}
void vote::waseem(){
	cout<<"Enter your name :"<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<name<<"  succesfully submit the vote to waseem "<<endl;
	vote_1++;
}
void vote::zohaib(){
	
	cout<<"Enter your name :"<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<name<<"  succesfully submit the vote to zohaib "<<endl;
	vote_2++;
}
void vote::election(){
	cout<<"\n\n\t\t\tWelcome to election pole "<<endl;
    cout<<"\n\n\t\t\tThe election candidates are \n\n\t\t\t (1) waseem  (2) zohaib "<<endl;
    cout<<"\n\n\t\t\tSelect your candidate ";
    cin>>selectcandidate;
    switch(selectcandidate){
    	case 1:
    	system ("cls");	
    	waseem ();
    	
    		break;
        case 2:
        	
        system ("cls");	
        zohaib();	
        break;
        default :
        system ("cls");
    	
    	
	}
	char ch;
	cout<<"\n\n\t\t\tsee the result press r"<<endl;
	cout<<"\n\n\t\t\tTo continue the election press n";
	cin>>ch;
	if(ch=='r'){
		cout<<"\n\n\t\t\tThe vote belong to waseem is "<<vote_1<<endl;
		cout<<"\n\n\t\t\tThe vote belong to zohaib is "<<vote_2<<endl;
		if(vote_1>vote_2){
			cout<<"\n\n\t\t\tWaseem is winning the election from this polling";
		}
		else if(vote_2>vote_1){
			cout<<"\n\n\t\t\tzohaib  is winning the election from this polling";
		}
	}
	if(ch=='n'){
		system("cls");
		 main();
	}
}

