// http://boj.kr/3cc26904d22d450b87249c46dc101fe9 
// 틀린 이유 비교 할것 
// https://carrot-farmer.tistory.com/41 


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;


// 문제의 Key, 어떤 큰 변수 타입을 사용하여 연산하더라도 범위 초과 
// 따라서,문자열을 이용하여 1자리씩 연산하는 것이 idea. 
// [참고자료] https://velog.io/@doctorson11/%EB%B0%B1%EC%A4%80-10757%EB%B2%88-%EB%AC%B8%EC%A0%9C%ED%81%B0-%EC%88%98-AB-C%EB%A1%9C-%ED%92%80%EA%B8%B0

void calculator(string num1, string num2)
{
    // ascii code의 활용 
    int carry = 0 ;
    vector<int> result;
    vector<int> vnum1, vnum2; 


    int num1_size = num1.size(); 
    int num2_size = num2.size(); 

    for(int i = 0; i < num1_size; i++)
    {
        int value = (int)num1[i] - '0';
        vnum1.push_back(value);  
    }

    for(int i = 0; i < num2_size; i++)
    {
        int value = (int)num2[i] - '0';
        vnum2.push_back(value);  
    }

    while(vnum1.size()  > 0 || vnum2.size() > 0)
    {

        int v1_num = (vnum1.size() > 0) ? vnum1.back() : 0; 
        int v2_num = (vnum2.size() > 0) ? vnum2.back() : 0;
        int combine = v1_num + v2_num;
        int sum = combine % 10 + carry; 
        carry = combine / 10; 

        result.push_back(sum); 
        if(vnum1.size() > 0) vnum1.pop_back();
        if(vnum2.size() > 0) vnum2.pop_back();
    }

    if(carry > 0)  result.push_back(carry); 


    while(result.size() > 0)
    {
        printf("%d", result.back()); 
        result.pop_back(); 
    } 

}



int main()
{
    string num1, num2; 
    cin >> num1 >> num2; 
    calculator(num1, num2);
    // printf("num1 size: %d", num1.size());
    // for(int i = 0; i < num1.size(); i++){printf("%c", num1[i]);}

}


// int main()
// {
//     unsigned long long int A, B; 
//     unsigned long long int sum = 0; 
//     cin >> A >> B; 
//     sum = A + B; 

//     printf("%llu", sum); 

// }