//Task # 2 Write a code that opens the file in read mode created in task# 1, and read that file line by line.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream MyWriteFile("filename.txt");
	
	MyWriteFile << "Files are Good Practice";
	
	MyWriteFile.close();
	
	string myText;
	
	ifstream MyReadFile("filename.txt");
	
	while (getline (MyReadFile, myText)) {
		cout << myText;
	}
	
	MyReadFile.close();
}
