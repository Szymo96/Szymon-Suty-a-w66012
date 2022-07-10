#include "Konto.h"
#include <iostream>
#include <string>

using namespace std;

Konto::Konto()
{
	this->imie = " ";
	this->nazwisko = " ";
	this->stan_konta = 0;
	this->nr_rachunku = 0;
}

Konto::Konto(string imie, string nazwisko, int nr_rachunku)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->nr_rachunku = nr_rachunku;
	stan_konta = 0;
}

Konto::Konto(int nr_rachunku)
{
	this->nr_rachunku = nr_rachunku;
	imie = " ";
	nazwisko = " ";
	stan_konta = 0;
}

Konto::Konto(Konto& k)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->nr_rachunku = k.nr_rachunku;
	this->stan_konta = k.stan_konta;
}

Konto::~Konto()
{

}

void Konto::setStan_konta(float s)
{	
	this->stan_konta = s;
}

void Konto::zmiana_wlasciciela(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

int Konto::oprocentowanie(int procent)
{
	float stan= 0;
	
	stan = (stan_konta * procent)/100;
	stan_konta = stan_konta + stan;
	return stan_konta;

}

