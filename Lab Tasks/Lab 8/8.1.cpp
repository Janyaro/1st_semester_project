//Task # 1:  Write a C++ program that creates and initializes an array of type integer as :
//int array[]={5,10,15,20,25};   and computes the SUM of the elements in the array.

#include<iostream>
using namespace std;

int main() {
	int arr[]={5,10,15,20,25};
	int size=sizeof(arr)/sizeof(int);
	int sum=0;
	for(int i=0;i<size;i++) {
		sum+=arr[i];
	}
	cout<<"Sum of all Numbers is "<<sum;
}

