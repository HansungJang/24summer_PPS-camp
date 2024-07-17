// time up  
// 참고
// [URL] https://st-lab.tistory.com/284

#include <iostream>
// #define Max 1000 

using namespace std; 

int Sequence(int N)
{
    int count = 0;

    if(N < 100) count = N; 
    else
    {
        count = 99; 
        for(int i = 100; i <= N; i++)
        {
            // Q. 만약 입력 범위가 INF이라면 어떻게 해야할까?  
            int hun = i / 100; 
            int ten = (i / 10) % 10; 
            int one = i % 10; 

            if((hun - ten) == (ten - one)) count++; 
        }

    }

    return count; 
}


int main()
{

    int N; 
    cin >> N; 
    
    int result = Sequence(N); 
    cout << result; 

    return 0; 
}