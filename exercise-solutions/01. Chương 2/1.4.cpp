// Bài 4: Nhập vào 2 số nguyên dương a và b (a và b không trùng giá trị).
// Hãy in ra màn hình số nhỏ hơn (không dùng cấu trúc if else hoặc toán tử 3 ngôi).

#include <iostream>
#include <math.h> 

using namespace std;

int main() {
	int a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	int tong = a + b;
	int hieu = abs(a - b); 
	
	cout << "Gia tri nho hon la " << (tong - hieu) / 2;
	
	return 0;
}