#include <string>
#include <vector>

using namespace std;

string solution(int num) 
{
    string answer = "";
    
    if(num % 2 == 0 or num == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
    
    return answer;
}