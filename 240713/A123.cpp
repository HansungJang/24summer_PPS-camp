// �ش� ������ Dynamic Programming �� �����ϴ� ���� 
// ������ ������ �޶�� ��. 

#include <iostream>
#include <algorithm>

using namespace std; 

#if 0

int counter(int X)
{
    int count = 0; 
    
    while(X != 1)
        {
            if(X % 3 == 0 && (X / 3) >= 1){ X /= 3; }
            else if(X % 2 == 0 && (X / 2) >= 1){X /= 2;}
            else{ X -= 1;}
            count++; 
        }
    
    return count; 
}


// 1 trial, ���� 
int main()
{
    int min = 0; 

    int count = 0; 
    int comp_count = 0 ; 
    int X; 

    cin >> X; 
    count = counter(X);

    // Compare case
    for(int i = 1; i < count; i++)
    {
        comp_count = counter(X-i) + i;
        if(i == 1){ min = (count > comp_count) ? comp_count : count; }
        else{ min = (min > comp_count) ? comp_count : min; }
    }
     
    printf("%d", min); 
}

#else 

// ���� ��� 
// [URL] https://beginnerdeveloper-lit.tistory.com/81

#define Max 1000000
int NUM[Max];

int main()
{
    int input; 

    cin >> input; 

    // intialize 
    for(int i = 0; i <= input; i++){ NUM[i] = 0; }
    
    // bottom-up 
    for(int i = 2; i <= input; i++)
    {
        // #1. -1�� �Ͽ� �����ϴ� ���  
        NUM[i] = NUM[i-1] + 1; 

        // #2. 2�� ���������� ��� 
        if(i % 2 == 0)
        {
            NUM[i] = min(NUM[i], NUM[i / 2] + 1); 
        }

        // #3. 3���� ���������� ��� 
        if(i % 3 == 0)
        {
            NUM[i] = min(NUM[i], NUM[i /3] + 1); 
        }
    }

    // DP ���� ����, ���� ������ �׻� �ּҰ��� ������ �����̾�� �����ϴ� ���� �̿� 
    cout << NUM[input]; 


    return 0; 
}


#endif
