// Bài 3: Viết chương trình nhập vào 1 số nguyên dương n. Tính và in ra màn hình n!.
// Lưu ý: Làm bằng 2 cách (sử dụng vòng lặp, sử dụng đệ quy)

// C1: vòng lặp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
long long factor(int n);

int main() {
	int n;
	
	input_integer("n = ", n);
	
	cout << n << "! = " << factor(n);
	
	return 0;
}

void input_integer(string label, int &n) 
{
 	cout << label;
	cin >> n;
}

long long factor(int n)
{
	long long result = 1;
	for(int i = 1; i <= n; i++) {
		result *= i;
	}
	
	return result;
}


// C2: đệ quy
long long factor(int n)
{
	if(n == 1) {
		return 1; 
	}

	return n * factor(n-1);
}
