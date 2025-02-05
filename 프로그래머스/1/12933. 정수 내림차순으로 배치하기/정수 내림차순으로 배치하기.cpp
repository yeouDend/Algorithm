#include <string>
#include <vector>
#include <string>
using namespace std;

void bubbleSort(std::vector<long long>& arr)
    {
        int n = arr.size();
        for (int i = 0; i < n -1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

long long combineNumbers(const vector<long long>& arr)
    {
        std::string combinedString = "";
        for(int num : arr)
        {
            combinedString += to_string(num);
        }
    return stoll(combinedString);
    }
    
    

long long solution(long long n) 
{
    string s = to_string(n);
    vector<long long> digits;
    for (char c : s)
    {
        digits.push_back(c- '0');
    }
    bubbleSort(digits);
    
    long long combinedNumber = combineNumbers(digits);
    return combinedNumber;
    
}