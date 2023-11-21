#include <iostream>
#include <string>

using namespace std;

/*
	- Tinh dong goi
	- Tinh ke thua
	- Tinh da hinh
	- Tinh truu tuong
*/

/*
	- Nap chong
		- Nap chong ham
		- Nap chong toan tu
	- Ghi de
	- Phuong thuc ao
*/

class Calculator
{
	public:
		int add(int a, int b)
		{
			cout << "Integer" << endl;
			return a + b;
		}
		
		float add(float a, float b)
		{
			cout << "Float" << endl;
			return a + b;
		}
};

int main()
{
	Calculator cal;
	
	int a = 1, b = 2;
	float c = 1.4, d = 1.5;
	
	cout << "a + b = " << cal.add(a, b) << endl;
	cout << "c + d = " << cal.add(c, d) << endl;
	
	return 0;
}


// 
class Point
{
	public:
		int x;
		int y;
		
		Point() {}
		
		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		
		friend Point operator+(Point p1, Point p2)
		{
			Point p3;
			p3.x = p1.x + p2.x;
			p3.y = p1.y + p2.y;
			
			return p3;
		}
};

int main()
{
	Point p1(1, 2), p2(3, 4);
	
	Point p3 = p1 + p2;
	
	cout << "P3 = " << p3.x << ", " << p3.y << endl;
	
	return 0;
}


//

#include <iostream>
#include <string>

using namespace std;

/*
	- Tinh dong goi
	- Tinh ke thua
	- Tinh da hinh
	- Tinh truu tuong
*/

/*
	- Nap chong
		- Nap chong ham
		- Nap chong toan tu
	- Ghi de
	- Phuong thuc ao
*/

class Animal
{
	public:
		void move()
		{
			cout << "Animal move" << endl;
		}
};

class Dog : public Animal
{
	public:
		void move()
		{
			cout << "Dog move" << endl;
		}
		
		void parent_move()
		{
			Animal::move();
		}
};

int main()
{
	Animal animal;
	Dog dog;
	
	animal.move();
	dog.move();
	dog.parent_move();
	
	
	return 0;
}
