// Bài 3: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử).
// Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên dương y. Thêm y vào vị trí x của mảng.

#include <iostream>

using namespace std;
 
int main() {
	int numbers[20];
	int n, x, y;

	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

  // bắt đầu từ vị trí numbers[n] giảm dần đến numbers[x]
  // gán các phần tử mới lần lượt bằng phần tử cũ
	for(int i = n; i > x; i--) {
		numbers[i] = numbers[i - 1];
	}
	numbers[x] = y; // thay thế phần tử mới vào vị trí đã chọn
	n++;
	
	cout << "Mang sau khi them la ";
	for(int i = 0; i < n; i++) {
		cout << numbers[i] << ' ';
	}
		
	return 0;
}