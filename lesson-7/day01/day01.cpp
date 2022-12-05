#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

class StrToInt{
public:
int STI(string data){
    int i=atoi(data.c_str());
    return i;}
};


class Solution
{
     int maxscore=0;
public:
    void counting()
    {
        string data;
        fstream file;
        int score=0;

        file.open("plik1.txt", ios::in | ios::out);
        if(file.good())
            {
                while( !file.eof() )
                {
                getline( file, data );
                StrToInt sti;
                if (sti.STI(data)!=0)
                    {
                       score+= sti.STI(data);
                    }
                else{score=0;}

                if(score>maxscore)
                    {
                    maxscore=score;
                    }
                }
                file.close();
            }
    }
    int answer()
    {
        return maxscore;
    }
};

int main()
{
    Solution solution;
    solution.counting();
    cout<<solution.answer();
    return 0;
}
