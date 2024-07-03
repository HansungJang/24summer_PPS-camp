// s 18:00 
// e 18:15
#include <string>
#include <vector>

#include <ctype.h>
#include <stdlib.h>


using namespace std;

bool solution(string s) {
    bool answer = true;
    
    // #1. ���ڿ� ���� Ȯ��
    if(s.length() != 4 && s.length() != 6) answer = false; 
    
    // #2. ���ڿ� ���� Ȯ�� 
    for(int i = 0; i < s.length(); i++)
    {
        if(!isdigit(s[i])){ answer = false; break; }
    }
       
    return answer;
}