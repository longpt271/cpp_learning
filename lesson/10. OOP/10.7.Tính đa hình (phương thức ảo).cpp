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
		virtual void move() = 0;
};

class Dog : public Animal
{
	public:
		void move()
		{
			cout << "Dog move" << endl;
		}
		
};

int main()
{
	Animal *animal = new Dog;

	animal->move();
	
	return 0;
}
