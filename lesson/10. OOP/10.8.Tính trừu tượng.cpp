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

class Animal	// Abstract class
{
	public:
		virtual void make_sound() = 0;
		virtual void move() = 0;
};

class Cat : public Animal
{
	public:
		void make_sound()
		{
			cout << "Cat make sound" << endl;
		}
		
		void move()
		{
			cout << "Cat move" << endl;
		}
};

class Dog : public Animal
{
	public:
		void make_sound()
		{
			cout << "Dog make sound" << endl;
		}
		
		void move()
		{
			cout << "Dog move" << endl;
		}
};

int main()
{
	Dog dog;
	Cat cat;

	dog.make_sound();
	dog.move();
	
	cat.make_sound();
	cat.move();
	
	return 0;
}
