#include <iostream>
#include <fstream>

using namespace std;

// Read/Write File

int main()
{
	fstream fs;
	
	fs.open("test.txt");	// neu file cung cap
	//	fs.open("D:\\_study\\f8\\4_Cpp\\hello\\test.txt");
	
	if(!fs.is_open())
	{
		return 1;	// Ket thuc chuong trinh
	}
	
	// Ghi file
		//	fs << "Pham Thanh Long << endl;
		//	fs << 1;
	
	// Doc file
		string name;
		int a;
		
		getline(fs, name);
		fs >> a;
		
		cout << "Name: " << name << endl;
		cout << "a: " << a;
	
	// Dong file
	fs.close();
	
	return 0;
}
