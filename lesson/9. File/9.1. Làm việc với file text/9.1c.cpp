#include <iostream>
#include <fstream>

using namespace std;

// in data file txt và điền vào Person struct

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
	
	
	fstream fs;
	
	fs.open("test.txt");
	
	if(!fs.is_open())
	{
		return 1;
	}
	
	for(int i = 0; i < 2; i++)
	{
		getline(fs, persons[i].name);
		fs >> persons[i].age;
		fs.ignore();
	}
	
	for(int i = 0; i < 2; i++)
	{
		cout << "Name: " << persons[i].name << ", age: " << persons[i].age << endl;
	}
	
	fs.close();

	return 0;
}
