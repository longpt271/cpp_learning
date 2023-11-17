// Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng. Hãy chuẩn hóa chuỗi đó.
// Gợi ý:
// Loại bỏ khoảng trắng đầu cuối.
// Loại bỏ khoảng trắng thừa ở giữa các từ.
// Viết hoa chữ cái đầu, các chữ còn lại viết thường.

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
	
  // xóa khoảng trắng thừa
	int i = 0;
	while(i < str.length()) {
		if(str[i] == ' ' && str[i + 1] == ' ') {
			str.erase(i, 1);
		} else {
			i++;
		}
	}
	
	// chuyển các ký tự thành chữ thường
	for(int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	
	// chuyển ký tự đầu của dòng thành chữ hoa
	str[0] = toupper(str[0]);
	
	// chuyển các ký tự đầu mỗi từ thành chữ hoa
	for(int i = 0; i < str.length(); i++) {
		if(str[i] == ' ' && str[i + 1] != ' ') {
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	
	
	cout << "Ket qua: " << str << '.';
	
	return 0;
}