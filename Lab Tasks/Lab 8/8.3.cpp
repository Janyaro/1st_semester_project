//Task # 3:  Write a C++ program that prints the second last element in the array created in Task 		   
//no. 1. And also displays the sum and product of last two elements of the array. 

#include<iostream>
using namespace std;

int main() {
	int arr[]={5,10,15,20,25};int sum,product;
	int size=sizeof(arr)/sizeof(int);int index=size-1;
	for(int i=index;i>0;i--) {
		arr[i];
	}

	cout<<"Second last number is "<<arr[index-1]<<"\n";
	sum=arr[index-1]+arr[index];
	cout<<"Sum of last two numbers is "<<sum<<"\n";
	product=arr[index-1]*arr[index];
	cout<<"Product of last two numbers is "<<product;
}

