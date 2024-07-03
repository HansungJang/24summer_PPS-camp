// s 18:00 
// e 18:15
#include <string>
#include <vector>

#include <ctype.h>
#include <stdlib.h>


using namespace std;

bool solution(string s) {
    bool answer = true;
    
    // #1. 문자열 길이 확인
    if(s.length() != 4 && s.length() != 6) answer = false; 
    
    // #2. 문자열 구성 확인 
    for(int i = 0; i < s.length(); i++)
    {
        if(!isdigit(s[i])){ answer = false; break; }
    }
       
    return answer;
}