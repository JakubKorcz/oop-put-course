#include <iostream>

using namespace std;

class Owner
{
private:
    string name="Jan Kowalski";
    int age=27;
    bool isMarried=false;

public:
string ownername()
{
    return name;
}

int ownerage()
{
    return age;
}
};


class Car{

string carmodel()
{
   return model;
}
private:
    string brand;
};

class Vehicle{

private:
    Car carmodel();
    Owner ownername();
    int year;
    int mileage;

public:

Vehicle(int y,int m)
{
      year=y;
      mileage=m;
}

int drive(int distance)
{
    return mileage+=distance;
}
};


int main()
{
   Vehicle mojpojazd(2010,110000);
   cout<<mojpojazd.drive(4);
   return 0;
}
