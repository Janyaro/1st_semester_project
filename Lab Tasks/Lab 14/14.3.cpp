//Task # 3 Suppose you wanted to write code that reads from a file one word at a time. Write C++ code to accomplish this.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream outp;
outp.open("text.txt");
outp.seekg(2,8);
outp.close();
	return 0;
}