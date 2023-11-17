// Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng.
// Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
	// chuyển các ký tự thành chữ thường
	for(int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	
	// chuyển ký tự đầu của dòng thành chữ hoa
	if(str[0] != ' ') {
		str[0] -= 32;
	} 

	// chuyển các ký tự đầu mỗi từ thành chữ hoa
	for(int i = 0; i < str.length(); i++) {
		if(str[i] == ' ' && str[i + 1] != 0) {
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	
	cout << "Ket qua: " << str;
	
	return 0;
}