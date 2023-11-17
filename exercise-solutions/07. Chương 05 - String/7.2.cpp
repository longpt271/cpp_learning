// Bài 2: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng.
// Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str;
	
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
  // xóa khoảng trắng thừa
	int i = 0; 
	while(i < str.length())
	{
		if(str[i] == ' ' && str[i + 1] == ' ') {
			str.erase(i, 1);
		} else {
			i++; 
		}
	}
  // xóa khoảng trắng thừa
	
	cout << "Ket qua: " << str << ".";
	
	return 0;
}