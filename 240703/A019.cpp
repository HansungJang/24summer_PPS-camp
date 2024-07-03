// https://www.acmicpc.net/problem/2577

#include <iostream>
#define Size 10

using namespace std;

int main()
{
    int result = 1;  

    int* counter = new int [Size];
    for(int i =0; i < Size; i++) counter[i] = 0;

    for(int i =0; i < 3; i++)
    {
        int in;
        cin >> in;
        result *= in;
    }

    while(result > 0)
    {
        int index = result % 10; 
        counter[index]++; 
        result /= 10; 
    }

    for(int i =0; i < Size; i++) printf("%d\n", counter[i]);

    delete[] counter;  
}
