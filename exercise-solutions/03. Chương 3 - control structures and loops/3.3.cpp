// Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
// degC = (degF - 32) / 1.8

#include <iostream>

using namespace std;

int main() {
	int deg_f;

	cout << "F = ";
	cin >> deg_f;

  float deg_c = (deg_f - 32) / 1.8;
  cout << "C = " << deg_c;
	
	return 0;
}