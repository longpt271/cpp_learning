// Bài 2: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
// Nhập mảng có n số nguyên và nhập số nguyên k.
// Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không,
// nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).

#include <iostream>

using namespace std;

int main() {
	int n, k, numbers[10];
	
	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	cout << "k = ";
	cin >> k;
	
	int x = -1, y = -1;   // -1 vì mảng bắt đầu [0] không có [-1]
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i != j && numbers[i] + numbers[j] == k) {
        //  nếu đã tìm thấy: gán -> break k lặp nữa
				x = i;
				y = j;
				break;
			}
		}
		if(x != -1 && y != -1) {
      // nếu đã tìm hai giá trị hợp lệ được gán -> break
			break;
		}
	}
	
	if(x != -1 && y != -1) {
		cout << "Ket qua: " << x << ' ' << y;	
	} else {
		cout << "Khong co.";
	}
	
	return 0;
}