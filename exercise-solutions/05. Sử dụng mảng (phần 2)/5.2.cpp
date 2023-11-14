// Bài 2: Viết chương trình nhập vào số nguyên dương n (0 < n <= 10).
// Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.


#include <iostream>

using namespace std;
 
int main() {
	int arr[20];
	int n;

	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	
	int max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	
	cout << "Gia tri lon nhat la: " << max;
		
	return 0;
}