// Bài 1: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10).
// Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính và in ra màn hình tổng các phần tử có trong mảng.

#include <iostream>

using namespace std;
 
int main() {
	int m, n, arr[10][10];

	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	
	cout << "Nhap mang: " << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int sum = 0; 
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
	}
	
	cout << "Tong cac phan tu trong mang la: " << sum;
		
	return 0;
}