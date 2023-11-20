#include <iostream>
#include <string>

using namespace std;

/*
	- Tinh dong goi
	- Tinh ke thua
	- Tinh da hinh
	- Tinh truu tuong
*/

class Cat
{
	private:
		string name;
		int age;
		
	public:
		Cat(){}
		
//		Cat(string _name, int _age) {
//			name = _name;
//			age =_age;
//		}

		Cat(string name, int age)
		{
			this->name = name;
			this->age = age;
		}
		
		string get_name()
		{
//			return name;
			return this->name;
		}
		
		int get_age()
		{
//			return age;
			return this->age;
		}
};

int main()
{
	//	Stack:
	//	Cat cat("Bo", 2);
	//	cout << "Name: " << cat.get_name() << endl;
	//	cout << "Age: " << cat.get_age() << endl;
	
	// Heap:	
	Cat *cat = new Cat("Bo", 2);
	cout << "Name: " << (*cat).get_name() << endl;
	cout << "Age: " << cat->get_age() << endl;
	
	// neu khai bao o public (truy xuat truc tiep "name")
	//	cout << "Name: " << (*cat).name << endl;
	//	cout << "Name: " << cat->name << endl;
	

	
	return 0;
}
