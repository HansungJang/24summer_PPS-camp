//[참고자료]
// 1. search 함수,  https://cplusplus.com/reference/algorithm/search/
// 2. min, max_element()함수, https://cplusplus.com/reference/algorithm/max_element/?kw=max_element

#include <iostream>
#include <vector>
#include <algorithm>
#define size 5 

using namespace std; 


int main()
{
    vector <int> list; 
    
    for(int i = 0; i < size; i++)
    {
        int sum = 0; 
        for(int j = 0; j < size -1; j++)
        {
            int input;
            cin >> input;
            sum += input; 
        }

        list.push_back(sum); 

    }
    
    int max_value = *max_element(list.begin(), list.end()); 
    vector<int>::iterator max_index = search(list.begin(), list.end(), &max_value, &max_value+1);
    
    printf("%d %d", (max_index - list.begin() + 1) , max_value);
    return 0; 
}