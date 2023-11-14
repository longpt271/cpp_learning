// Bài 2: Nhập vào 1 chữ cái viết thường bất kì. Hãy in ra màn hình chữ cái đó dưới dạng viết hoa.

#include <iostream>

using namespace std;

int main() {
	char a;
	
	cout << "Chu cai viet thuong: ";
	cin >> a;
	
	cout << "Chu cai viet hoa: " << (char) (a-32);
	
	return 0;
}