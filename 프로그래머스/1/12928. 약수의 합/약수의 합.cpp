#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int a = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0 && n / i)
        {
            sum += i;
        }
    }
    
    return sum;
}