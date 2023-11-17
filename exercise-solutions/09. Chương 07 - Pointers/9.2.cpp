// Bài 2: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xóa phần tử ở vị trí x.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void remove(int* &arr, int &size, int deleted_index);

int main() {
	int n, x;
	
	input_integer("n = ", n);

	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);

	input_integer("x = ", x);
	remove(numbers, n, x);
	
	cout << "Mang sau khi xoa: ";
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

void remove(int* &arr, int &size, int deleted_index) {
	// Xoa phan tu can xoa tren mang cu
	for(int i = deleted_index; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	// Tao mang moi
	int new_size = size - 1;
	int *tmp_arr = new int[new_size];

	// Copy cac phan tu mang cu sang mang moi
	for(int i = 0; i < new_size; i++) {
		tmp_arr[i] = arr[i];
	}
	
	// Gan mang moi cho mang cu va giam size 1 don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
}


