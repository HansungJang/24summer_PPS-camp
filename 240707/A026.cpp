#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int divide_num = 0; 
    int origin = x; 
    while(x > 0)
    {
        divide_num += (x % 10);
        x /= 10; 
    }
    
    if(origin % divide_num != 0) answer = false;
    
    
    return answer;
}