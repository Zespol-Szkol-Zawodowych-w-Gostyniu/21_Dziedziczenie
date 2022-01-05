//DZIEDZICZENIE

#include <iostream>
#include "Pojazd.h"
#include "PojazdyOsobowe.h"
using namespace std;

int main()
{
    //Pojazd obj1(4, 1.5);
    //cout << obj1.szerokosc << endl;
    //PojazdyOsobowe obj2(5);
    PojazdyOsobowe obj2(2,3,5);
    cout << obj2.liczbaMiejsc << endl;
    cout << obj2.szerokosc << endl;
    obj2.stan();
}

