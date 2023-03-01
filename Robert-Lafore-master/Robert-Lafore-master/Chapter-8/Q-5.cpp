/*Assume that the publisher in Exercises 1 and 3 decides to add a third way to distribute
books: on computer disk, for those who like to do their reading on their laptop. Add a
disk class that, like book and tape, is derived from publication. The disk class should
incorporate the same member functions as the other classes. The data item unique to this
class is the disk type: either CD or DVD. You can use an enum type to store this item.
The user could select the appropriate type by typing c or d
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

	
	
	
	

 
 
 class disk :public publishing
{
private:
 enum dtype
 {CD,DVD};
 dtype userchoice;
public:
 void getdata(void)
 {
  char a;
  publishing::getdata();
  cout << "Enter disk type (c or d) for CD and DVD: ";
  cin >> a;
  if (a == 'c')
   userchoice = CD;
  else
   userchoice = DVD;

 }
 void putdata()
 {
  publishing::putdata();
  cout  << "Disk type is: ";
  if (userchoice == CD)
   cout << "CD";
  else
   cout << "DVD";
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
	disk t;
	t.getdata();
	cout<<"\n\n";
	t.putdata();
	return 0;
}

