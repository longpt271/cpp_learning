// ios::app
// Mở file ở chế độ ghi
// và sẽ chỉ ghi vào cuối chứ không xóa các dữ liệu cũ

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	
	fs.open("test.txt", ios::out | ios::app);
	
	if(!fs.is_open())
	{
		cout << "Khong mo duoc file";
		return 1;
	}
	
	fs << " app";

	fs.close();

	return 0;
}
