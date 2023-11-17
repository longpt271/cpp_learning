#include <iostream>
#include <fstream>

using namespace std;

// ghi file từ mảng struct

struct Person
{
	string name;
	int age;
	
	Person(){	}
	
	Person(string _name, int _age)
	{
		name = _name;
		age = _age;
	}
};

int main()
{
	Person *persons = new Person[2];
	
	persons[0] = Person("Long", 24);
	persons[1] = Person("Pham Thanh Long", 18);
	
	fstream fs;
	
	fs.open("test.txt");
	
	if(!fs.is_open())
	{
		return 1;
	}
	
	for(int i = 0; i < 2; i++)
	{
		fs << persons[i].name << endl;
		fs << persons[i].age << endl;
	}
	
	fs.close();

	return 0;
}
