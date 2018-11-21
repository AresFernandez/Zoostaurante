#pragma once
#include <string>
#include <vector>
#include "Man.h"

class Estado
{
	std::string nombre;
	std::string partido;

public:
	std::string paraisoFiscalDePreferencia;
	std::vector<Man> borregos;

	Estado();
	~Estado();
	void UseGoogleTranslate();
private:
	void Estafar();
	double Use155();

};

