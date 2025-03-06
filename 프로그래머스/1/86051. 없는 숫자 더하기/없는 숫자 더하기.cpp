#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    vector<int> num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;

    for (int i = 0; i < num.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < numbers.size(); j++)
        {
            if (num[i] == numbers[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            sum += num[i];
        }
    }
    
    return sum;
}