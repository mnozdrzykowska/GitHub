#pragma once
#include "Uzytkownik.h"
class OperatorSystemu :
	public Uzytkownik
{
public:
	OperatorSystemu();
	~OperatorSystemu();
private:
	string kod;
	int poziomUprawnien;
public:
	string pobierzKod();
	byte pobierzPoziomUprawnien();
};

