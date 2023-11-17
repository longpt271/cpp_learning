// Bài 1: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
// Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.


#include <iostream>

using namespace std;

int main() {
	int n, numbers[10];
	
	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
// Thuật toán sắp xếp nổi bọt (bubble sort)
	for(int i = n - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(numbers[j] < numbers[j + 1]) {
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
// Thuật toán sắp xếp nổi bọt (bubble sort)
// if(numbers[j] > numbers[j + 1]) // Tăng dần
	
	cout << "Mang sau khi xep la: ";
	for(int i = 0; i < n; i++) {
		cout << numbers[i] << ' ';
	}
	
	return 0;
}