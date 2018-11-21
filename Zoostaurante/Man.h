#pragma once
#include "Animal.h"
#include "Restaurant.h"

class Man: public Animal
{

public:
	Man();
	~Man();
	void Shout() override;

private:
	int Pay();
};

