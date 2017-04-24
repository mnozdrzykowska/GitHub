#pragma once
#include "Uzytkownik.h"
#include <string>

using namespace std;
class Klient :
	public Uzytkownik
{
public:
	Klient();
	~Klient();
protected:
	int nrLokalu;
	int kodPocztowy;
	long talafon;
	string ulica, nrDomu, miasto;

public:
	void pobierzDane();
};

