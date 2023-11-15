// Bài 3: Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra tổng của 2 ma trận.
// Gợi ý: Phép cộng 2 ma trận là việc cộng các phần tử có vị trí tương ứng của 2 ma trận đó

#include <iostream>

using namespace std;

int main() {
	int n, m, matrix1[10][10], matrix2[10][10];
	
	cout << "n = ";
	cin >> n;	
	cout << "m = ";
	cin >> m;
	
	cout << "Nhap ma tran 1: \n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> matrix1[i][j];
		} 
	}
	
	cout << "Nhap ma tran 2: \n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> matrix2[i][j];
		} 
	}
	
	cout << "Tong 2 ma tran: \n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << matrix1[i][j] + matrix2[i][j] << ' ';
		}
		cout << endl; 
	}
	
	return 0;
}