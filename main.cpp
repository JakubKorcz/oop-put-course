#include <iostream>

using namespace std;

class Silnik{
   public:
        bool czy_odpalony=0;
   int odpal_silnik()
    {
        cout<<"Silnik zostal odpalony"<<endl;
        czy_odpalony=1;
        return 0;
    }
};

class Samochod{
    public:
        int ilosc_kol;
        string marka;
        string model;
        int rok_produkcji;
        Silnik silnik;
};

class Pies{
public:
    int ilosc_nog;
    string imie;
    int wiek;
};


int main()
{
    Pies pies1;
    pies1.ilosc_nog=4;
    pies1.imie="Zbigniew";
    pies1.wiek=6;
    Samochod samochod;
    samochod.marka="Audi";
    samochod.silnik.odpal_silnik();
}
