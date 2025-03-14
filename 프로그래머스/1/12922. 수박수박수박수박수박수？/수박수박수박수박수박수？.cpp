#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
    string answer = "";
    
    for (int i = 0; i < n; i++)
    {
        string a = "수";
        string b = "박";
        
        if (i % 2 == 0)
        {
            answer.append(a);
        }
        else
        {
            answer.append(b);
        }
    }
    return answer;
}