#pragma once
#include <vector>
#include "Man.h"

struct Vec2 {
	int x;
	int y;
};

class Zoo
{
private:
	float income;
public:
	float precioEntrada;
	Vec2 location;
	std::vector<Animal> *animaluskis;
	std::vector<Man> visitantes;

	Zoo();
	~Zoo();
private:
	void Open();
	int Close();
};

