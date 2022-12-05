#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream myfile;
	myfile.open("Alps.txt", ios::in);//read
	myfile.open("Carpathians.txt", ios::in);//read
	myfile.open("Icelandic Highlands.txt", ios::in);//read
	myfile.open("Pyrenees.txt", ios::in);//read
	if (myfile.is_open()) 
	{
		string line;
		while (getline(myfile, line)) {
			cout << line << endl;
		}
		myfile.close();
	}
	return 0;
}