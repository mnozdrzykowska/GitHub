#pragma once
#include "Klient.h"
class Firma :
	public Klient
{
public:
	Firma();
	~Firma();
private:
	string nazwaFirmy;
	string NIP;
};

