#include <iostream>

using namespace std;

class Book{
public:
    int pages;
    string author;
    Book(int p,string a)
    {
        pages=p;
        author=a;
    }
};

int main()
{
   Book PanTadeusz(345,"Adam Mickiewicz");
}


