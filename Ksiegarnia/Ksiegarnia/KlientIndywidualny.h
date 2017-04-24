#pragma once
#include "Klient.h"
class KlientIndywidualny :
	public Klient
{
public:
	KlientIndywidualny();
	~KlientIndywidualny();
private:
	string imie;
	string nazwisko;
};

