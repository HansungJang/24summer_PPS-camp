#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int num : arr)
    {
        if(num % divisor == 0) answer.push_back(num); 
    }
    
    if(answer.size() > 0)
    {
        sort(answer.begin(), answer.begin() + answer.size());
    }
    else{answer.push_back(-1);}
     
    
    return answer;
}

int main()
{
    vector<int> input = {5, 9, 7, 10};
    int divisor = 5; 
    
    vector<int> output = solution(input, divisor); 
    for(int num : output){printf("%d ", num); }
    
    
    return 0; 
}