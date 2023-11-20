// ios ate
// Mở file và di chuyển con trỏ xuống cuối file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	
	fs.open("test.txt", ios::out | ios::ate);
	
	if(!fs.is_open())
	{
		cout << "Khong mo duoc file";
		return 1;
	}
	
	string str ;
	getline(fs, str);
	
	cout << "str: " << str; 

	fs.close();

	return 0;
}
