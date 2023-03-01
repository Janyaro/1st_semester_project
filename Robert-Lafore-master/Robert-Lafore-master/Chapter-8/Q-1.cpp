/*Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data
     */

#include<iostream >
using namespace std;

class publishing {
	private:
		string title;
		float price;
		
	public:
	void getdata();
	void putdata();
	
};
 
 
 
 void publishing::putdata(){
 	cout<<"Enter title name "<<endl;
 	getline(cin,title);
 	cout<<"Enter price "<<endl;
 	cin>>price;
 }

void publishing::getdata(){
	cout<<"The title name is "<<title<<endl;

	cout<<"The price is "<<price<<endl;
}

class book:public publishing {
		int count;
	public:
		void getdata();
	void putdata();
};

void book::putdata(){
	publishing::putdata();
	cout<<"Book page count :";
	cin>>count;
}
void book::getdata(){
	publishing::getdata();
	cout<<"The page of the book is "<<count;
}
class tape:public book{
	float ptime;
	public:
		void getdata();
	void putdata();
};

void tape::putdata(){
	publishing::putdata();
	cout << "Enter tap's playing time: ";
  cin >> ptime;
}

void tape::getdata(){
	publishing::getdata();
	cout<<"the playing time is "<<ptime<<endl;
}
int main(){
	tape t;
	book b;
	t.putdata();
	cout<<"\n\n";
	t.getdata();
	
	b.putdata();
	cout<<"\n\n";
	b.getdata();
	return 0;
}
