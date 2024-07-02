#include <string>
#include <iostream>
#include <cstring>
using namespace std;


bool solution(string s)
{
    bool answer = true;
    int count[] = {0, 0}; // count[0]: p, count[1]: y 
    
    for(int i = 0; i < s.length(); i++)
    {
        if(toupper(s[i]) == 'P') count[1]++; 
        else if(toupper(s[i]) == 'Y') count[0]++;
    }
    
    if(count[0] != count[1]) answer = false; 

    return answer;
}
