//Task # 14: Write a C++ program that passes an array (of your choice) as an argument to  a function.

#include<iostream>
using namespace std;
void function(int arr[]) {
	int arra[]={0,5,4,3,2,4};int index,sum,product;
	int large=arra[0];
	int size=sizeof(arra)/sizeof(int);
	for(int i=0;i<size;i++)
	{
		if (large<arra[i])
		{large=arra[i];
		index=i;}
	}
	cout<<large<<"\t\t\t\t\t\t\t\t"<<index+1;
}
int main()
{int size;int arr[size];
	function(arr);
}

