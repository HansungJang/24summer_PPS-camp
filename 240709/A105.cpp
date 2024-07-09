// 참고 답안  idea, 대각선 방향으로, (짝수, 홀수) 순서에 따라서 패턴을 사용 
// 규칙 
// 1. 원소 갯수 가 1씩 증가 
// 2. 홀수: 분자 ~ 해당 열의 번호 숫자 만큼 증가
//    짝수: 분모 ~ 해당 열의 번호 숫자 만큼 증가 
// 3. 찾는 index의 번호 = 입력 숫자 -  입력 숫자의 해당열 이전의 원소의 총 갯수 

// 열의 번호: 1 
// 1 | 1 / 1 

// 2 
// 2 | 1 / 2 
// 3 | 2 / 1 

// 3 
// 4 | 3 / 1 
// 5 | 2 / 2
// 6 | 1 / 3  

// 4
// 7 | 1 / 4 
// 8 | 2 / 3
// 9 | 3 / 2 
//10 | 4 / 1 

#include <iostream>

using namespace std; 

int main()
{
    int curr_row  = 1; 
    int index_num = 0;
     
    cin >> index_num; 

    while(index_num > curr_row)
    {
        index_num -= curr_row; 
        curr_row++; 
    }

    if(curr_row % 2 == 0)
    {
        cout << index_num << " / " << curr_row + 1 - index_num; 
    }
    else
    {
        cout << curr_row + 1 - index_num << " / " << index_num ; 
    }

    return 0; 
}