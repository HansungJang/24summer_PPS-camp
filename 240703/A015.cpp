// 6자리 비번
// 0~4번 index value (00000 ~ 99999) 임의 
// 5번 검증수 / 0 ~ 4번 저장된 값의 제곱의 합 % 10한 값  

#include <iostream>
#include <math.h>

#define size 5

using namespace std; 

int main()
{
    int id_value = 0; // 검증수  
    
    int sum = 0;  
    for(int i = 0; i < size; i++)
    {
        int input = 0; 
        cin >> input;
        sum += pow(input, 2); 
    }

    id_value = sum % 10; 
    printf("%d", id_value);
} 