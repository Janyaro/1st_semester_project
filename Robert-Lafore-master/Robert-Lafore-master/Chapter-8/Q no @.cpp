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
	void getdata(){
		cout<<"Enter title name "<<endl;
 	getline(cin,title);
 	cout<<"Enter price "<<endl;
 	cin>>price;
	}
	void putdata(){
		cout<<"The title name is "<<title<<endl;
	cout<<"The price is "<<price<<endl;
	}
	
};
 
class sale{
	int month[3];
	public:
		void getdata(){
			for(int i=0;i<3;i++){
				
			cout<<"Enter the sale of "<<i+1<<" month";
			cin>>month[i];
			}
		}
	    void putdata(){
	    	for(int i=0;i<3;i++){
	    		cout<<"The sale of the "<<i+1<<"month is "<<month[i]<<"dollar"<<endl;
			}
		}
};

class disk{
	private:
		char select ;
		enum{CD,DVD};
	public:
		void getdata(){
			cout<<"Enter Disk type (CD,DVD)";
			cin>>select;
			if(select=='c')
		}
	
	
	
	
};

class book:public publishing,public sale{
		int count;
	public:
		void getdata();
	void putdata();
};

void book::getdata(){
	publishing::getdata();
	sale::getdata();
	cout<<"Book page count :";
	cin>>count;
}
void book::putdata(){
	publishing::putdata();
	sale::putdata();
	cout<<"The page of the book is "<<count;
}
class tape:public book {
	float ptime;
	public:
		void getdata(){
			publishing::getdata();
	sale::getdata();
	cout << "Enter tap's playing time: ";
  cin >> ptime;
		}
	void putdata(){publishing::putdata();
	sale::putdata();
	cout<<"the playing time is "<<ptime<<endl;
	}
};

int main(){
	tape t;
	t.getdata();
	cout<<"\n\n";
	t.putdata();
	return 0;
}

