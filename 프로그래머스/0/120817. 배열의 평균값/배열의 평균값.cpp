#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{
    int n;
    float sum = 0;
    n = numbers.size();
    double answer = 0;
    
    for(int i = 0; i < n; i++)
    {
       
       sum += numbers[i];
    }
    answer = sum / n;
    return answer;
}
//벡터 안에 넣고
