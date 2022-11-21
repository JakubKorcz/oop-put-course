#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>

class FakeCantor {
 private:
  std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
 public:
  FakeCantor() = default;
  float EuroToRate(const std::string &currency) {
    return rates[currency];
  };
};

class Currency {
 public:
  virtual Currency *AddedCurrency(float value, std::string currency) = 0;
  virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
  virtual std::string Abbreviation() = 0;
  virtual std::string Symbol() = 0;
  virtual std::string Balance() = 0;
  virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
    float euro;
  public:
    Euro *AddedCurrency(float value,std::string currency){
      Euro *b =new Euro(value*FakeCantor.EuroToRate(std::string currency));
      return b;
    }

    Euro *SubtractedCurrency(float value, std::string currency){
          Euro *b =new Euro(value*FakeCantor.EuroToRate(std::string currency));
          return b;
    }

    virtual std::string Abbreviation(){
    return "EUR";
    }

    virtual std::string Symbol(){
    return "€";
    }

    virtual std::string Balance()
    {
       return Euro(this.euro+"€");
    }

    virtual float DollarExchangeRate(){
         float dlr=1/FakeCantor.EuroToRate("USD");
         return dlr;
    }
};

int main() {
    Euro e1;

    return 0;
}
