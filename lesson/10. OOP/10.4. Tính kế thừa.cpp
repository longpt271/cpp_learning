#include <iostream>
#include <string>

using namespace std;

/*
	- Tinh dong goi
	- Tinh ke thua
	- Tinh da hinh
	- Tinh truu tuong
*/

class Animal	// Class cha
{
	public:
		string name;
		float weight;
		
		void run()
		{
			cout << "Animal is running..." << endl;
		}
};

class Cat : public Animal	// Class con
{
	public:
		void eat()
		{
			cout << "Cat is eating..." << endl;
		}
};
class Dog : public Animal	// Class con
{
	public:
		void eat()
		{
			cout << "Dog is eating..." << endl;
		}
};

int main()
{
	Cat cat;
	
	cat.weight = 30;
	cat.name = "Bo";
	
	cout << "Name: " << cat.name << endl;
	cout << "Weight: " << cat.weight <<  endl;

	cat.run();
	
	return 0;
}
