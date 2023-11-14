// Bài 2: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xóa phần tử ở vị trí x.

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
	

	for(int i = x; i < n - 1; i++) {
		numbers[i] = numbers[i + 1];
	}
	n--;
	
	cout << "Mang sau khi xoa la ";
	for(int i = 0; i < n; i++) {
		cout << numbers[i] << ' ';
	}
		
	return 0;
}