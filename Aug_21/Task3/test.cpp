#include <iostream>

class Animal {
public:
	Animal() = default;
	~Animal() {std::cout << "Des" << std::endl;}
	virtual void sound() {
		std::cout << "Animal sound" << std::endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		std::cout << "Dog sound" << std::endl;
	}
};

int main()
{
	{
	Animal* x = new Dog(); 
	Animal y;
	x->sound();
	//(*x).sound();
	y.sound();
	}
	std::cout << "Hello" << std::endl;
	return 0;
}
