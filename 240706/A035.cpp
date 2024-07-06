#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
    int M = 0, Y = 0; 
    int N = 0; 
    // int sum = 0; 
    
    cin >> N ; //size; 
    for(int i = 0; i < N; i++)
    {
        int input; 
        cin >> input; 
        // sum += input; 
        M += (input / 60.0) * 15 + 15; 
        Y += (input / 30.0) * 10 + 10; 
    }
    
    // 183 
    // == 60(30) 60(15) 60(15)  (same fee area 180 ~ 239)
    // == 30(20) 30(10) 30(10) 30(10) 30(10) 30(10)  (same fee area 180 ~ 209)


    // 120  
    // == 60(30) 60(+15)
    // == 30(20) 30(10) 30(10) 30(10)  

    // 오답 이유! 통화 요급 계산은 총합이 아닌 각 통화별로 연산이 되어야 함.  

    // M = (sum / 60.0) * 15 + 15; 
    // Y = (sum / 30.0) * 10 + 10; 

    // printf("M: %d, Y: %d\n", M, Y);

    if(M > Y) printf("Y %d\n", Y);
    else if(M < Y) printf("M %d\n", M);
    else printf("Y M %d\n", Y);
    
    return 0; 
}