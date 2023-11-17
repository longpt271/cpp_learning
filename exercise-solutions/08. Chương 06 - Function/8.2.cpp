// Bài 2: Viết chương trình nhập vào 1 số nguyên dương n (n > 1). Tính và in ra màn hình tổng các số nguyên tố từ 2 -> n.
// Lưu ý: Làm bằng 2 cách (sử dụng vòng lặp, sử dụng đệ quy)

// C1: dùng vòng lặp for()
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
bool is_prime(int n);
int sum_of_primes(int n);

int main() {
	int n;
	
	input_integer("n = ", n);
	
	cout << "Ket qua: " << sum_of_primes(n);
	
	return 0;
}

void input_integer(string label, int &n) 
{
 	cout << label;
	cin >> n;
}

bool is_prime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true; 
}

int sum_of_primes(int n) {
	
	int result = 0;
	for(int i = 2; i <= n; i++) {
		if(is_prime(i)) {
			result += i;
		}
	}
	
	return result;
}

// C2: dùng đệ quy

int sum_of_primes(int n)
{
	if(n == 2) {
		return 2;
	}
	if(is_prime(n)) {
		return n + sum_of_primes(n-1);
	}
	
	return sum_of_primes(n-1);
}