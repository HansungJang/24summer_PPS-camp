#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int size; 
    vector<int> list; 
    int sum = 0;

    cin >> size; 
    for(int i = 0; i < size; i++)
    {
        int input; 
        cin >> input; 
        if(list.size() > 0 && input == 0) list.pop_back(); 
        else{list.push_back(input);}
    }

    while(list.size() > 0)
    {
        sum += list.back();
        list.pop_back(); 
    }

    cout << sum ;
    return 0; 
}