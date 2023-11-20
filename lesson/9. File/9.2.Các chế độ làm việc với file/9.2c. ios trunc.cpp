// ios::trunc
// Mở file ở chế độ ghi và xóa hết nội dung trong file,
// nếu file không tồn tại thì sẽ tạo file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	
	fs.open("test.txt", ios::out | ios::trunc);
	
	if(!fs.is_open())
	{
		cout << "Khong mo duoc file";
		return 1;
	}
	
	fs << "Hello";

	fs.close();

	return 0;
}
