// ios::out
// Mở file ở chế độ ghi và xóa hết nội dung trong file,
// Nếu file k tồn tại thì sẽ tạo file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	
	fs.open("test1.txt", ios::out);
	
	if(!fs.is_open())
	{
		cout << "Khong mo duoc file";
		return 1;
	}
	
	fs << "HI";

	fs.close();

	return 0;
}
