// Bài 4: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Sắp xếp lại mảng đó theo thứ tự tăng dần và in ra màn hình.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void sort(int *arr, int size);

int main() {
	int n, x, y;
	
	input_integer("n = ", n);

	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);
	
	sort(numbers, n);
	
	cout << "Mang sau khi sap xep: ";
	print_array(numbers, n);
	
	return 0;
}

void input_integer(string label, int &n) 
{
 	cout << label;
	cin >> n;
}

void input_array(int *arr, int size) 
{
 	for(int i = 0; i < size; i++) {
 		cin >> arr[i];
	 }
}

void print_array(int *arr, int size) 
{
 	for(int i = 0; i < size; i++) {
 		cout << arr[i] << ' ';
	 }
}

void sort(int *arr, int size) {
	for(int i = size - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

