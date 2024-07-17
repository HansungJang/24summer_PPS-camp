#include <string>
#include <vector>

#define max 100

using namespace std;


int minCount (char c, vector<string> keymap)
{
    int min = max; 
    for(int i = 0 ; i < keymap.size(); i++ )
    {
        for(int j = 0; j < keymap[i].length(); j++) // 
        {
            if(c == keymap[i][j])
            {
                if(min > j) min = j; 
            }
        }
    }
    
    min+= 1; 
    
    return min; 
}


vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    
    // parent: target, child: keymap 
    
    // target, ���� �ϳ��� (find, value) ���� return 
    // int min (�� ���� ����)
    
    for(int i = 0 ; i < targets.size(); i++)
    {
        int sum = 0;
        
        for(int k = 0; k < targets[i].length(); k++)
        {
            char c = targets[i][k]; 
            int result = minCount(c, keymap); 
            sum  = (result >= max) ? -1 : (sum + result); 
            if(sum < 0) break; 
        }
        
        answer.push_back(sum); 
    }
        
        
    return answer;
}