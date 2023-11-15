// Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng.
// Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str;
	
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
  // Xoá khoảng trắng ở đầu
	while(str[0] == ' ') {
		str.erase(0, 1);
	}
	
  // Xoá khoảng trắng ở cuối
	while(str[str.length() - 1] == ' ') {
		str.erase(str.length() - 1, 1);
	}
	
	cout << "Ket qua: " << str << ".";
	
	return 0;
}