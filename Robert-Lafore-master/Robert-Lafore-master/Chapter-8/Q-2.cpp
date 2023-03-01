#include<iostream >
using namespace std;

class publishing {
	private:
		string title;
		float price;
		
	public:
	void puttdata();
	void getdata();
	
};
 
 
 
 void publishing::getdata(){
 	cout<<"Enter title name "<<endl;
 	getline(cin,title);
 	cout<<"Enter price "<<endl;
 	cin>>price;
 }

void publishing::puttdata(){
	cout<<"The title name is "<<title<<endl;

	cout<<"The price is "<<price<<endl;
}

class sales 
{
	int m_1,m_2,m_3;
	public:
		void getdata(){
			
		cout<<"Enter the sales of First month :";
		cin>>m_1;
		
		cout<<"Enter the sales of second month :";
		cin>>m_2;
		cout<<"Enter the sales of third  month :";
		cin>>m_3;

}
void putdata(){
	cout<<"The sales of first month "<<m_1<<endl;
	cout<<"The sales of second month "<<m_2<<endl;
	cout<<"The sales of third month "<<m_3<<endl;
}
};
class book:public publishing,public sales {
		int count;
	public:
		void getdata();
	void putdata();
};

void book::putdata(){
	publishing::putdata();
	sales::puttdata();
	cout<<"Book page count :";
	cin>>count;
}
void book::getdata(){
	publishing::getdata();
	sales::putdata();
	cout<<"The page of the book is "<<count;
}
class tape:public book,public sales {
	float ptime;
	public:
		void getdata();
	void putdata();
};

void tape::putdata(){
	
	publishing::putdata();
	sales::getdata();
	cout << "Enter tap's playing time: ";
  cin >> ptime;
}

void tape::getdata(){
	sales::putdata();
	publishing::getdata();
	cout<<"the playing time is "<<ptime<<endl;
}
int main(){
	tape t;
	t.getdata();
	return 0;
}
