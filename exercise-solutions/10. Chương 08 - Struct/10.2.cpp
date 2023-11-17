// Bài 2: Viết chương trình quản lý sản phẩm (tên, đơn giá, số lượng) gồm các chức năng sau:
// - Nhập xuất dữ liệu struct
// - show_menu()
// - Xem danh sách sản phẩm

#include <iostream>
#include <string>

using namespace std;

struct Product
{
	string name;
	int price;
	int quantity;
	
	friend istream& operator>>(istream &is, Product &product)
	{
		cout << "Nhap ten: ";
		getline(is, product.name);
		cout << "Nhap don gia: ";
		is >> product.price;
		cout << "Nhap so luong: ";
		is >> product.quantity;
		
		return is;
	}
	
	friend ostream& operator<<(ostream &os, Product product)
	{
		os << "Ten: " << product.name;
		os << ", don gia: " << product.price;
		os << ", so luong: " << product.quantity;
		
		return os;
	}
};

int show_menu();
void print_products(Product *products, int size);


int main()
{
	int size = 0;
	Product *products = new Product[size];
	
	while(true)
	{
		int chose = show_menu();
		
		system("cls");	// xoa toan bo du lieu tren man hinh console sau khi chon
		switch(chose)
		{
			case 1:
				// Xem danh sach
				print_products(products, size);
				break;
			case 2:
				// Them san pham
				break;
			case 3:
				// Xoa san pham
				break;
			case 0:
				cout << "Bye bye!";
				
				return 0;
			default:
				cout << "Lua chon khong hop le." << endl;	
		}
		
		cout << "Ban co muon tiep tuc khong? (1/0) ";
		bool is_continue;
		cin >> is_continue;
		
		if(!is_continue)
		{
			cout << "Bye bye!";
			break;
		}
	}
	return 0;
}

int show_menu()
{
	system("cls");	// xoa toan bo du lieu tren man hinh console
	int chose;
	cout << "===== MENU =====" << endl;
	cout << "1. Xem danh sach san pham" << endl;
	cout << "2. Them san pham moi" << endl;
	cout << "3. Xoa san pham" << endl;
	cout << "0. Thoat chuong trinh" << endl;
	
	cout << "Lua chon cua ban la: ";
	cin >> chose;
	
	return chose;
}

void print_products(Product *products, int size)
{
	if(!size)
	{
		cout << "Chua co san pham nao." << endl;
	}
	else
	{
		cout << "Danh sach san pham: " << endl;
		for(int i = 0; i < size; i++)
		{
			cout << products[i] << endl;
		}
	}
}