#include <iostream>
#include <string>
#include "Konto.h"

using namespace std;

ostream& operator << (ostream& wy, Konto& k)
{
    wy << "Dane wlasciciela: " << k.imie << " " << k.nazwisko << " " << "Nr rachunku: " << k.nr_rachunku << " " << "Stan konta: " << k.stan_konta << endl;
    return wy;
}

int main()
{
    Konto k1("Jan", "Kowalski", 12345);
    Konto k2(54321);

    k2.zmiana_wlasciciela("Adam", "Nowak");

    Konto k3;

    k3 = k2;
    
    k1.setStan_konta(1000);
    k2.setStan_konta(10000);
    k3.setStan_konta(100000);

   cout<< "Stan konta wynosi: " << k1.getStan_konta() << endl;

   k1.oprocentowanie(10);
   cout << "Stan konta wynosi: " << k1.getStan_konta() << endl;

   k2.oprocentowanie(5);
   cout << "Stan konta wynosi: " << k2.getStan_konta() << endl;

   k3.oprocentowanie(2);
   cout << "Stan konta wynosi: " << k3.getStan_konta() << endl;

   cout << k1;

}

