//Task # 11: Write a program that will read in 5 numbers, each of which is between 1 and 5, inclusive. 
//As each number is read, print it only if it is not a duplicate of a number already read.

#include<iostream>
int size=5;
using namespace std;
int main(){ 
	int i,j,k;
	int Arr[size];
	for(j=0;j<size;j++)
	{cout<<"Enter Elements "<<j+1<<" ";cin>>Arr[j];}
	
	for(i=0;i<size;i++) {
		for(j=i+1;j<size;) {
				if (Arr[i]==Arr[j]) {
						for(k=j;k<size-1;k++) {
							Arr[k]=Arr[k+1];
						}
							--size;
					}
				else
					{j++;}
		}
	}
	cout<<endl<<"\n\nNon-Duplicate Elemnts are: \n";
	
	for(j=0;j<size;j++)
	{cout<<Arr[j]<<"\t";}
}
	
