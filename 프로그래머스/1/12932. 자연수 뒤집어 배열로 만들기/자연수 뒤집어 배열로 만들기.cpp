#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    long i = 0;
    while(n >= 1)
    {
        i = (n % 10);
        answer.emplace_back(i);
        n = n / 10;
    }
    return answer;
}