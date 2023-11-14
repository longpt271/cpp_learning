// Bài 1: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1 + 2 + 3 + ... + n.

#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;
	
	int sum = 0;
	for(int i = 1; i<=n; i++) {
		sum += i; 
	} 
	
	cout << "S = " << sum;
	
	return 0;
}