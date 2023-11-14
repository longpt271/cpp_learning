// Bài 2: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.

#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;
	
	int sum = 0;
	for(int i = 1; i<=n; i++) {
		sum += (i * i); 
	} 
	
	cout << "S = " << sum;
	
	return 0;
}

// C2:
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;
	
	int sum = 0;
	for(int i = 1; i<=n; i++) {
		sum += pow(i, 2); 
	} 
	
	cout << "S = " << sum;
	
	return 0;
}