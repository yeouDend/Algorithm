#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int sum = 0;
    int X = x;
    while(x > 0)
    {
        sum +=(x %10);
        x = x/10;
    }
    if (X % sum == 0)
    {
        if(sum % x == 0)
        {
            bool answer = true;   
            return answer;
        }
    }
    else
    {
        bool answer = false;
         return answer;
    }
   
}