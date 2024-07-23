// 17 : 57 2nd trial 


// conected component 문제 
// BFS 방법으로 count 


#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std; 

int main()
{
    int computer_num; 
    int edge_num; 


    cin >> computer_num; 
    cin >> edge_num; 

    vector<vector<int>> com_connect(computer_num); 
    queue<int> virus_com; 
    vector<int> virus_com_list; 
    //connected computer 연결 
    for(int i = 0; i < edge_num; i++)
    {
        int con_com1, con_com2; 
        cin  >> con_com1 >> con_com2; 
        com_connect[con_com1 - 1].push_back(con_com2); 
        com_connect[con_com2 - 1].push_back(con_com1); 
    }

    //virus computer 찾기 
    int virus_start = 1; 
    virus_com.push(virus_start); 
    virus_com_list.push_back(virus_start);

    while(!virus_com.empty())
    {
        int index = virus_com.front(); 
        for(int i : com_connect[index -1])
        {
            if(find(virus_com_list.begin(), virus_com_list.end(), i) == virus_com_list.end())
            {
                virus_com.push(i);
                virus_com_list.push_back(i); 
            } 
        }
        virus_com.pop(); 
    } 

    cout << (virus_com_list.size() - 1); 

    return 0; 
}