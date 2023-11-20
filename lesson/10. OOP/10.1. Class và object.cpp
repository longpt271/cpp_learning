// Class và object

#include <iostream>
#include <string>

using namespace std;

// class, object

class Person
{
	public:	// Cong khai
		// Properties
		string name;
		int age;
		string address;
		
		// Constructor
		Person()
		{
			
		}
		
		Person(string _name, int _age, string _address)
		{
			name = _name;
			age = _age;
			address = _address;
		}
		
		// Methods
		void work()
		{
			cout << name << " is working in " << address << endl;
		}
		
	private: // Rieng tu (trong pham vi Person)
	//		string address = "Ha Noi";
		
};

int main()
{
	//	Person person1;
	//	person1.name = "Nguyen Van A";
	//	person1.age = 28;

	Person person1("Nguyen Van A", 28, "Ha noi");
	
	cout << "Name: " << person1.name << endl;
	cout << "Age: " << person1.age << endl;
	cout << "Address: " << person1.address << endl;
	
	person1.work();
	
	return 0;
}
