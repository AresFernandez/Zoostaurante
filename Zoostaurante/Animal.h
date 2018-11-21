#pragma once
#include <string>

class Animal
{
private:
	int age;
	std::string origin;
	int roarStrength;
public:
	bool carnivoro;

	Animal();
	~Animal();
	void Eat();
	virtual void Shout();
	void Wonder();
};

