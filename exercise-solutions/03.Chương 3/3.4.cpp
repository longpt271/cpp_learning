// Bài 4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
// Số nguyên tố là số chỉ chia hết cho 1 và chính nó.

#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;
	
	bool is_nt = true;
	
  // i = 2 vì luôn chia hết cho 1 và sẽ bắt đầu thử từ 2
` // n - 1 vì n sẽ không bao giờ chia hết cho số nhỏ hơn nó 1 đơn vị (tránh lặp thừa)
	for(int i = 2; i < n - 1; i++) {
		if(n % i == 0) {
			is_nt = false;
			break;
		}
	}
	
	if(is_nt) {
		cout << "n la so nguyen to.";
	} else {
		cout << "n khong la so nguyen to.";
	}
		
	return 0;
}

// C2:
// VD: n = 9;
// 1 2 3 4 5 6 7 8 9
// căn bậc hai của 9 là 3. Thì các số 4 5 6 7 8 sẽ không bao giờ chia hết cho 9

for(int i = 2; i <= sqrt(n); i++) {

	}