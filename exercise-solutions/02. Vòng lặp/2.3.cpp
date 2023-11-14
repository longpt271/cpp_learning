// Bài 3: Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.
// n = 3; n! = 1 * 2 * 3

#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;
	
	unsigned long long s = 1;
	for(int i = 1; i<=n; i++) {
		s *= i; 
	} 
	
	cout << "n! = " << s;
	
	return 0;
}