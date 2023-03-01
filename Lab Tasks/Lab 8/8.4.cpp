//Task # 4: Write a C++ program that finds the smallest element in the array and also its index  created in Task no. 1.

#include<iostream>
using namespace std;

int main() {
	int arr[]={5,10,15,20,25};int index,sum,product;
	int small=arr[0];
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++) {
		if (small>arr[i]) {
		small=arr[i];
		index=i;}
	}
	cout<<"Smallest Number is: "<<small<<"\n"<<"with Index  "<<index;
}

