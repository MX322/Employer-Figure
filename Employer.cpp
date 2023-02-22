#include <iostream>

class Employer
{
protected:
	int salary;
public:
	virtual void Print() = 0;
};


class President : public Employer
{
public:
	President(int _salary)
	{
		this->salary = _salary;
	}

	void Print()
	{
		std::cout << "President's salary : " << this->salary << std::endl;
	}
};


class Manager : public Employer
{
public:
	Manager(int _salary)
	{
		this->salary = _salary;
	}

	void Print()
	{
		std::cout << "Manager's salary : " << this->salary << std::endl;
	}
};


class Worker : public Employer
{
public:
	Worker(int _salary)
	{
		this->salary = _salary;
	}

	void Print()
	{
		std::cout << "Worker's salary : " << this->salary << std::endl;
	}
};


int main()
{
	Employer* emp = nullptr;

	emp = new Worker(5000);
	emp->Print();

}