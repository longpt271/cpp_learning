// Bài 1: Viết chương trình nhập vào 1 số nguyên dương n. Kiểm tra xem số n có phải là số nguyên tố hay không

// C1:
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
bool is_prime(int n);

int main() {
	int n;
	
	input_integer("n = ", n);
	
	if(is_prime(n)) {
		cout << n << " la so nguyen to.";
	} else {
		cout << n << " khong la so nguyen to.";
	}
	
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

// C2:
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string is_prime(int n) {
	
	bool is_nt = true;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) {
			is_nt = false;
			break;
		}
	}
	
	if(is_nt) {
		cout << n << " la so nguyen to.";
	} else {
		cout << n << " khong la so nguyen to.";
	}
}

int main() {
	int n;
	
	cout << "n = ";
	cin >> n;
	
	cout << is_prime(n);
	
	return 0;
}