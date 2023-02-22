#include <iostream>
#define Pi 3.14

class Figure
{
public:
	virtual void square()
	{
		std::cout << "Figure's square = ..." << std::endl;
	}
};


class Rectangle : public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;
	int sideD;

public:
	Rectangle(int _sideA, int _sideB, int _sideC, int _sideD)
	{
		this->sideA = _sideA;
		this->sideB = _sideB;
		this->sideC = _sideC;
		this->sideD = _sideD;
	}

	void square()
	{
		std::cout << "Rectangle's square = " << sideA * sideB << std::endl;
	}
};


class Circle : public Figure
{
private:
	int radius;

public:
	Circle(int _radius)
	{
		this->radius = _radius;
	}

	void square()
	{
		std::cout << "Circle's square = " << radius * Pi << std::endl;
	}
};


class Triangle : public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;

public:
	Triangle(int _sideA, int _sideB, int _sideC)
	{
		this->sideA = _sideA;
		this->sideB = _sideB;
		this->sideC = _sideC;
	}

	void square()
	{
		std::cout << "Triangle's square = " << (sideA * sideB) / 2 << std::endl;
		
	}
};


class Trapeze : public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;
	int sideD;
	int cornerB;

public:
	Trapeze(int _sideA, int _sideB, int _sideC, int _sideD, int _cornerB)
	{
		this->sideA = _sideA;
		this->sideB = _sideB;
		this->sideC = _sideC;
		this->sideD = _sideD;
		this->cornerB = _cornerB;
	}


	int h()
	{
		return sideB * sin(cornerB);
	}


	int m()
	{
		return (sideA + sideC) / 2;
	}


	void square()
	{
		std::cout << "Trapeze's square = " << m() * h() << std::endl;

	}
};




int main()
{
	const int size = 4;
	Figure* fg[size] = {new Rectangle(5, 6, 5, 6), new Circle(4), new Triangle(3, 4, 7), new Trapeze(7, 4, 5, 4, 90)};

	for (int i = 0; i < size; i++)
	{
		fg[i]->square();
	}
	
}