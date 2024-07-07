#include <iostream>
#include <set>
#define Capa 10
#define divide 42 

using namespace std; 

int main()
{
    set<int> list; 
    for(int i = 0; i < Capa; i++)
    {
        int input; 
        cin >> input; 
        list.insert(input % divide); 
    }

    cout << list.size();  

    return 0; 
}