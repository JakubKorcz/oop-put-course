#include <iostream>

using namespace std;

class Shitori{
    string words[100];
    bool game_over;
    int number_of_words;
    string end_game="Game over";
public:
    Shitori()
    {
        for(int i=0;i<100;i++)
            {
                words[i]="0";
            }
        game_over=0;
        number_of_words=0;
    }

    string *play(string new_word)
    {
        if(words[0]=="0")
            {
                game_over=0;//set game over to 0 when there are no words
                number_of_words=0;
            }
        if(game_over==0&&number_of_words==0)
        {
            words[0]=new_word;
            game_over=0;
            number_of_words++;
            return words;
        }
        else if(game_over==0&&number_of_words>0)
        {
            char a=words[number_of_words-1][words[number_of_words-1].length()-1];//last letter
            char b=new_word[0];//first letter of new word
            if(a==b)
                {
                    words[number_of_words]=new_word;
                    game_over=0;
                    number_of_words++;
                    return words;
                }
            else
                {
                    cout<<end_game<<endl;
                    game_over=1;
                    return &end_game;
                }
        }
        else
        {
            cout<<end_game<<endl;
            game_over=1;
            return &end_game;
        }
    }

    void restart()
    {
        game_over=0;
        for(int i=0;i<100;i++)
            {
                words[i]="0";
            }
        number_of_words=0;
    }

    string* printWords()
    {
        if(game_over==1)
            {
                restart();
            }
        for(int i=0;i<number_of_words;i++)
            {
                cout<<words[i]<<endl;
            }
        return words;
    }
};


int main()
{
   Shitori s1;
   s1.play("abc");
   s1.play("chat");
   s1.play("hat");
   s1.restart();
   s1.play("abc");
   s1.play("chat");
   s1.printWords();

    return 0;
}
