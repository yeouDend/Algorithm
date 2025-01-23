#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
    double sum = 0;  
    int n = arr.size();  
    
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    
    return sum / n;  
}
