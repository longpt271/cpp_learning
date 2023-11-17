// Bài 3: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên y. Thêm y vào vị trí x của mảng.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void update(int* &arr, int &size, int updated_index, int new_element); 

int main() {
	int n, x, y;
	
	input_integer("n = ", n);

	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);

	input_integer("x = ", x);
	input_integer("y = ", y);
	
	update(numbers, n, x, y);
	cout << "Mang sau khi them: ";
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

void update(int* &arr, int &size, int updated_index, int new_element) {
	// Tao mang moi
	int new_size = size + 1; 
	int *tmp_arr = new int[new_size]; 

	// Copy toan bo phan tu cu sang mang moi
	for(int i = 0; i < size; i++) {
		tmp_arr[i] = arr[i]; 
	}

	// Them phan tu moi vao mang moi
	for(int i = new_size - 1; i > updated_index; i--) {
		tmp_arr[i] = tmp_arr[i - 1];
	}
	tmp_arr[updated_index] = new_element;
	
	// Gan mang moi cho con tro cu va tang size len 1 don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
}

