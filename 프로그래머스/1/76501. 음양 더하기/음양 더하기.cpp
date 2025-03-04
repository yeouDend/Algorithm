#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) 
{
    //for문 돌려서 true면 *1, false면 *-1해주고 다 더하면 끝
    
    int sum = 0;
   
    for(int i = 0; i < absolutes.size(); ++i)
    {
        if (signs[i] == true)
        {
            sum += absolutes[i];
        }
        else
        {
            sum += absolutes[i] * -1;
        }
    }
    int answer = sum;
    return answer;
}