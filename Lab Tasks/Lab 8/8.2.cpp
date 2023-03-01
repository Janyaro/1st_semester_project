//Task # 2: Consider the array in Taskno.1 . Write a C++ program that print the all elements of the 	      
//array in reverse order, As 25,20, …5.  

#include<iostream>
using namespace std;

int main() {
	int arr[]={5,10,15,20,25};
	int size=sizeof(arr)/sizeof(int);int index=size-1;
	for(int i=index;i>0;i--) {
		arr[i];
	}
	cout<<"Reverse order is"<<endl;
	for(int i=index;i>=0;i--) {
		cout<<arr[i]<<"\t";
	}
}

