// Reference 
// 1. sort 함수 /  https://cplusplus.com/reference/algorithm/sort/?kw=sort+
// 2. copy 함수 /  https://cplusplus.com/reference/algorithm/copy/


#include <iostream>
#include <vector>
#include <algorithm>

#define Size 8

using namespace std; 

bool Descfunction (int i, int j) {return (i > j); }

int compSort(vector<int> asce, vector<int> desc, int* input)
{
    int type = 0 ; 

    for(int i = 0 ; i < Size; i++)
    {
        if(input[i] != asce[i]){ type = 0; break;}
        else type = 1; 
    }
    
    if(type <= 0)
    {
        for(int i = 0 ; i < Size; i++)
        {
            if(input[i] != desc[i]){ type = 0; break;}
            else type = 2; 
        }
    }

    return type;  
}


int main()
{
    int input[Size]; 
    vector<int> asce(Size);
    vector<int> desc(Size); 
    
    for(int i = 0; i < Size; i++)
    {
        int num; 
        cin >> num; 
        input[i] = num; 
    }

//copy value
    copy(input, input + Size , asce.begin());
    copy(input, input + Size , desc.begin());

//sorting 
    sort(asce.begin(),  asce.end()); 
    sort(desc.begin(), desc.end(), Descfunction); 

    // for(vector<int>::iterator it = asce.begin(); it != asce.end(); ++it) cout << ' ' << *it; 
    // cout << '\n';
    // for(vector<int>::iterator it = desc.begin(); it != desc.end(); ++it) cout << ' ' << *it;
    // cout << '\n';

//compaer 
    int type = compSort(asce, desc, input); 

//print
    switch(type)
    {
        case 1 : printf("ascending"); break; 
        case 2 : printf("descending"); break;  
        default : printf("mixed"); break; 
    }
  
    return 0; 
}