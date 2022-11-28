#include <iostream>
#include <cmath>

using namespace std;

class Logarithm : public Number {
 private:
  double base, argument;
 public:
  double doubleValue()
  {
      try
        {
        return log(this->argument) / log(this->base);
        if(this->argument!=0)
            {
                cout<<"Argument is correct";
            }
        else
            {
                throw 0;
            }
        }
        catch(int mynum)
        {
            cout<<"The argumnent can't be NULL";
        }
    }
}
  Logarithm(double inputBase, double inputArgument) {
    this->base = inputBase;
    this->argument = inputArgument;
  }
};

int main()
{
  Logarithm(1,0);
  Logarithm.doubleValue();
}
