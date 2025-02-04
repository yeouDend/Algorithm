#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    long long x;
    
    x = (long long)sqrt(n);
    
    if (n == x * x)
    {
        
        answer = (x+1) * (x+1);
    }
    else
    {
        answer = -1;
    }
        return answer;
}