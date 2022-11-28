#include <iostream>
#include <cmath>

using namespace std;

class Numbers {

class Solution{
    int a;
    Solution(int x){
        a=x;
    }
    int answer(){
    return a;
    }
    
};
 public:
  int max(int a, int b) { return a > b ? Solution(a) : Solution(b);}
  int min(int a, int b) { return a < b ? Solution(a) : Solution(b);}
  float avg(int a, int b) { return (a + b) / 2;}
};

int main()
{
  
}
