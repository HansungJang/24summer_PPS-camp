// 6�ڸ� ���
// 0~4�� index value (00000 ~ 99999) ���� 
// 5�� ������ / 0 ~ 4�� ����� ���� ������ �� % 10�� ��  

#include <iostream>
#include <math.h>

#define size 5

using namespace std; 

int main()
{
    int id_value = 0; // ������  
    
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