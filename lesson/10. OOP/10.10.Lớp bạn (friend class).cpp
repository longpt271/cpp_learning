#include <iostream>

using namespace std;

// Lap ban - Friend class

class B;

class A
{
	private:
		int x = 4;
		
		friend B;
};

class B
{
	public:
		void print_x(A a)
		{
			cout << a.x;
		}
};

int main()
{
	B b;
	b.print_x(A());
	
	return 0;
}


// 

#include <iostream>
#include <vector>

using namespace std;

// Lap ban - Friend class

int main()
{
	vector<int> numbers;
	
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	
	for(int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << ' ';
	}
	cout << endl;
	
	numbers.erase(numbers.begin() + 1);
	
	for(int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << ' ';
	}
	
	return 0;
}

//
#include <iostream>
#include <vector>

using namespace std;

// Lap ban - Friend class

class Bank;

class Account
{
	private:
		string name;
		int balance;
		
	public:
		string get_name()
		{
			return this->name;
		}
		
		int get_balance()
		{
			return this->balance;
		}
		
		friend Bank;
};

class Bank
{
	private:
		vector<Account> accounts;
		
	public:
		void add_account(string name, int balance)
		{
			Account new_account;
			new_account.name = name;
			new_account.balance = balance;
			
			this->accounts.push_back(new_account);
		}
		
		void get_account(string name)
		{
			int index = -1;
			for(int i = 0; i < this->accounts.size(); i++)
			{
				if(!name.compare(this->accounts[i].name))
				{
					index = i;
					break;
				}
			}
			
			if(index != -1)
			{
				cout << "Name: " << this->accounts[index].name;
				cout << ", balance: " << this->accounts[index].balance << endl;
			}
			else
			{
				cout << "Not found" << endl;
			}
		}
};

int main()
{
	Bank bank;
	
	bank.add_account("Long", 2000);
	bank.add_account("Duy", 3000);
	bank.add_account("Tuan", 4000);
	
	bank.get_account("Tuan");
	bank.get_account("Tuan1");
	
	return 0;
}
