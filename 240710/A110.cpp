//Dynamic Programming ���� 
//Greedy ����, ū���� ȭ�� ���������� ���, �ٸ� ������ �� ���ü� ����
//greedy Solution ���� 


#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int change = 1000;
    int price = 0;  
    int change_type[] = {500, 100, 50, 10, 5, 1}; 
    
    int count = 0; 
    int index = 0; 

    cin >> price; 
    change -= price; 

    while(change > 0)
    {

        int number_coin = change / change_type[index];  
        count += number_coin; 
        change -= change_type[index] * number_coin; 
        index++; 
        
    }

    printf("%d\n", count); 

}