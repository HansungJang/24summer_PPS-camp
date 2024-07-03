// https://www.acmicpc.net/problem/2455
#include <iostream>
#define max 10000
#define line 4 
using namespace std; 

int main()
{
    int max_value = 0 ; 
    int sum = 0;
    int in, out =0; 

    for(int i =0; i < line; i++)
    {
        cin >> out >> in;
        sum += (in - out); 

        if(sum > max_value) max_value = sum; 
    }

    printf("%d", max_value);
    
    return 0; 
}