#pragma once
#include <iostream>
#include <string>


using namespace std;

class Konto
{
private:
	string imie;
	string nazwisko;
	float stan_konta;
	int nr_rachunku;

public:
	Konto();
	Konto(string imie, string nazwisko, int nr_rachunku);
	Konto(int nr_rachunku);
	Konto(Konto& k);
	~Konto();

	void setStan_konta(float s);
	int getStan_konta() { return stan_konta; }
	void zmiana_wlasciciela(string imie, string nazwisko);
	int oprocentowanie(int procent); 
	friend ostream& operator << (ostream& wy, Konto&);
};

