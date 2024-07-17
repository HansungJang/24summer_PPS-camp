#include <iostream>

using namespace std; 

int main()
{
    int in;

    cin >> in; 

    int div = 2; 

    while(in > 1)
    {
        
        if((in % div) == 0)
        {
            printf("%d\n", div);
            in /= div; 
        } 

        else
        {
            if((div + 1) <= in) div++; 
        }

    }

}