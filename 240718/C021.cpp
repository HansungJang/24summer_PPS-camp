#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

// idea, 2도시간의 합이 최소 -> 2도시간의 차이가 최소가 되도록하는 조합을 생각
//solution 참고 
bool oper(vector<int> elem1, vector<int> elem2)
    {
        return (elem1.back() - elem1.front()) > (elem2.back() - elem2.front());
    }

class Solution {
public:



    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum  = 0 ; 

        sort(costs.begin(), costs.end(), oper); 
        for(int i = 0; i < costs.size(); i++)
        {
            if(i < (costs.size() / 2 )) sum += costs[i].front(); 
            else {sum += costs[i].back(); }
        }

        return sum; 
    }


};


int main()
{
    vector<vector<int>> list; 
    int count = 0; 
    int sum = 0; 
    while(count < 5)
    {
        vector<int> elem; 
        for(int i = 0; i < 2; i++)
        {
            int input; 
            cin >> input; 
            elem.push_back(input); 
        }
        list.push_back(elem); 
        count++; 
    }

    sort(list.begin(), list.end(), oper);   


    for(int i  = 0; i < list.size(); i++)
    {
        cout << "first: "<< list[i].front() << ", second: " << list[i].back() << endl; 
    }  

    return 0; 
}