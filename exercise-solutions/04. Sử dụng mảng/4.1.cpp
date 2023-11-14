// Bài 1: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng vừa tạo.

#include <iostream>

using namespace std;
 
int main() {
	int numbers[20];
	int n, x;

	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	cout << "x = ";
	cin >> x;
	
	numbers[n] = x;
	n++;
	
	cout << "Mang sau khi them la ";
	for(int i = 0; i < n; i++) {
		cout << numbers[i] << ' ';
	}
		
	return 0;
}