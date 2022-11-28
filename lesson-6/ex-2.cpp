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
        if(this->argument==0)
            {
                throw argumentequalsnull("The argumnent can't be NULL");
            }
        else if(this->base<0)
            {
                throw baseissmallerthannull("The base should be greater than 0");
            }
        else if(this->base==1)
            {
                throw baseequalsone("The base can't be ONE");
            }
        else if(this->argument<0)
            {
                throw argumentissmallerthannull("The argument should be greater than 0");
            }
        }
        catch(const argumentequalsnull& e)
        {
            cout<<"The argumnent can't be NULL";
        }
        catch(const baseissmallerthannull& e)
        {
            cout<<"The base should be greater than 0";
        }
        catch(const baseequalsone& e)
        {
            cout<<"The base can't be ONE";
        }
        catch (const argumentissmallerthannull& e)
        {
            cout<<"The argument should be greater than 0";
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

