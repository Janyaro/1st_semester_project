/*Task # 7: In the following program, explain why the value "6" is printed twice in a row:
// **** file increment.cpp **** 
 int main(){
 int i = 3;
 i++;                            
 cout << i; // "4"
 ++i; 
 cout << i; // "5"
 cout<<++i; // "6"
 cout<<i++; // "6"
 cout << i; // "7" }*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	/*Explanation:
	 int i = 3;
 i++;                                                       
 cout << i; // "4"               
 ++i; 
 cout << i; // "5"
 cout<<++i; // "6"                       It prints 6 because it is pre incremented
 cout<<i++; // "6"                       Here first 6 is printed then it is incremented by 1 because it is post incremented
 cout << i; // "7"*/
return 0;
 }