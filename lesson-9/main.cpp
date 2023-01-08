#include <iostream>

using namespace std;

class Game{
public:
    virtual string result(int con) = 0;
};


class FakeFootballGame: public Game{
public:
    string result(int con){
        return "Score from external API ";
    }
};


int main()
{
    FakeFootballGame g1;
    cout<<g1.result(1);
    return 0;
}
