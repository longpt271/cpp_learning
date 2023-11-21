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
	protected:
		float weight = 30;
		
	public:
		
		void run()
		{
			cout << "Animal is running..." << endl;
		}
		
		float get_weight()
		{
			return this->weight;
		}
};

class Pet
{
	public:
		string name;
}

class Cat : public Animal, public Pet	// da ke thua
{
	public:
		void eat()
		{
			cout << "Cat is eating..." << endl;
		}
		
		void show_weight()
		{
			cout << "Weight: " << this->weight << endl;
		}
};
int main()
{
	Cat cat;
	
	cat.show_weight();

	
	return 0;
}
