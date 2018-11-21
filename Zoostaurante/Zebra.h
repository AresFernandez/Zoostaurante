#pragma once
#include "Animal.h"

class Zebra : public Animal
{
public:
	Zebra();
	~Zebra();
	void Shout() override;
};

