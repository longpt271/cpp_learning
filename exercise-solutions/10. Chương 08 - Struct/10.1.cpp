// Bài 1: Viết chương trình nhập vào dữ liệu bán kính của 1 hình tròn.
// Tính và in ra màn hình chu vi và diện tích của hình tròn đó (sử dụng struct).


#include <iostream>

using namespace std;

const float PI = 3.14;

struct Circle
{
	float r;
	
	friend istream& operator>>(istream &is, Circle &circle)
	{
		cout << "Nhap ban kinh: ";
		is >> circle.r;
		
		return is;
	}
	
	float chu_vi()
	{
		//	r * 2 * PI
		return r* 2 * PI;
	}
	
	float dien_tich()
	{
		// r * r * PI
		return r * r * PI;		
	}
};


int main()
{
	Circle circle;
	
	cin >> circle;
	
	cout << "Chu vi hinh tron: " << circle.chu_vi() << endl;
	cout << "Dien tich hinh tron: " << circle.dien_tich() << endl;
	
	return 0;
}