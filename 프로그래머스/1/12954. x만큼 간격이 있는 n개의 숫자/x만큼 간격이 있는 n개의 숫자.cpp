#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer;
    for(long i = 1; i <= n; i++)
    {
       answer.push_back (i * x);
    }
    return answer;
}
//x가 증식할때의 개수의 범위가 n