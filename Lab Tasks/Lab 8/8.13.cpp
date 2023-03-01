//Task # 13: Consider the Integer array 
//int array[]={5,10,15,20,25,99,2,1,11};
//Write C++ code that will traverse the array find and display ONLY the two digit numbers from the array.   

#include<iostream>
using namespace std;
const int SIZE=500;
int main() {	
	int arr[]={5,10,15,20,25,99,2,1,11};
	int size=sizeof(arr)/sizeof(int);
	cout<<"Traversing is\n";
	for(int i=0;i<size;i++)
	{ cout<<arr[i]<<endl;}
	cout<<"\n\nTwo Digit Numbers Are\n ";
	for(int i=0;i<size;i++)
	{if(100>arr[i]&&arr[i]>=10)
	cout<<arr[i]<<"\t";
	else
	cout<<"";}
}

