//Dynamic Programming 문제 
//Greedy 문제, 큰단위 화페 작은단위의 배수, 다른 범위의 수 나올수 없음
//greedy Solution 만족 


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