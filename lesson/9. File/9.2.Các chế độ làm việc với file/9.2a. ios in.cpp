// ios::in 
// Mở file ở chế độ đọc, nếu file đã tồn tại
// Đọc file, không cho ghi file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	
	fs.open("test1.txt", ios::in);
	
	if(!fs.is_open())
	{
		cout << "Khong mo duoc file";
		return 1;
	}

	fs.close();
	
//	string name;
//	getline(fs, name);
//	
//	cout << name;

	return 0;
}
