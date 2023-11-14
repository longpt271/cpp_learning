// Bài 3: Nhập vào 2 số nguyên a và b. Hãy hoán đổi giá trị của 2 số đó và in ra màn hình.

#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	int c = a; // gán qua biến thứ 3
	a=b;
	b=c;

	cout << "Gia tri cua a la " << a << endl;
	cout << "Gia tri cua b la " << b;
	
	return 0;
}