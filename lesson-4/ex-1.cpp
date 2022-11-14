#include <iostream>

using namespace std;

class Car{
public:
    virtual int fueltoMax()=0;
    virtual int drive();
};

class Honda : public Car{
private:
    int fuel;
public:
    Honda(){
    fuel=0;
    }
    int fueltoMax()
    {
       fuel=800;
       return fuel;
    }
    int drive(int km)
    {
        return fuel-=km;
    }
};

int main()
{
    Honda nonFueledCar = Honda();
    Honda fueledCar=nonFueledCar.fueltoMax();
    return 0;
}
