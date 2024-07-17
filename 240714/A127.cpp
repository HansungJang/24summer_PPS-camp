// // 최소 공배수를 찾는 문제 

// #include <iostream>
// #include <vector>
// #include <algorithm> // find() 
// // https://en.cppreference.com/w/cpp/algorithm/find
// // idea 소인수 분해 각원소 공통되는 부분 추리기  


// using namespace std; 

// #if 0 // 1 trial, 코드 중복 (num1: 3, num2: 4)인 경우와 같을떄 오류 발생
// int find_min(int num1, int num2)
// {

//     cout << "num1 : " << num1 << ", num2 : " << num2 << endl; 
//     int result = 1; 
//     vector<int> elem; 

//     if(num1 == 1 || num2 == 1)
//     {
//         result = (num1 >= num2) ? num1 : num2; 
//     }

//     else {
//         int div = 2; 


//         while(num1 > 1)
//         {
//             if(num1 % div == 0)
//             {
//                 elem.push_back(div);
//                 num1 /= div; 
//             }
//             div++; 
//         }

//         div = 2; 

//         while(num2 > 1)
//         {
//             if(num2 % div == 0)
//             {
//                 if(find(elem.begin(), elem.end(), div) ==  end(elem)) elem.push_back(div);
//                 num2 /= div; 
//             }
//             div++; 
//         }

//         while(elem.size() > 0)
//         {
//             result *= elem.back(); 
//             elem.pop_back(); 
//         }
        

//     }


//     return result; 
// }
// #else // 2trial, 

// vector<int> divide_elem(int num)
// {
//     vector<int> list;
//     int range = num; 
//     for(int i  =2; i < range; i++)
//     {
//         if(num % i == 0)
//         {
//             while((num % i) == 0)
//             {
//                 if(num <= 1) break; 
//                 list.push_back(i);
//                 num /= i;
//             }
//         }
//     }
//     return list;  
// }

// int find_min(int num1, int num2)
// {
//     int result = 1;
//     int min = (num1 > num2) ? num1 : num2; 

//     vector<int> lnum1, lnum2;

//     lnum1 =   divide_elem(num1); 
//     lnum2 =   divide_elem(num2); 
//     for(int i = 0; lnum1.size(); i++)
//     {
//         if(find(lnum2.begin(), lnum2.end(), lnum1[i]) == end(lnum2)){ lnum2.push_back(lnum1[i]);} 
//     }

//     for(int i = 0; i < lnum2.size(); i++){result *= lnum2[i];}

//     int mult = 2; 
//      while(result < min)
//      {
//         result *= mult;
//         mult++; 
//      }


//     return result; 
// }


// #endif 

// int main()
// {
//     int size; 
//     vector<int> min_mult; 

//     cin >> size; 
//     for(int i = 0; i < size; i++)
//     {
//         int num1, num2; 
//         int result; 
//         cin >> num1 >> num2; 
//         result = find_min(num1, num2);
//         min_mult.push_back(result);
//     }

//     for(int i = 0; i < size; i++){cout << min_mult[i] << endl;}

//     return 0; 
// }

///// [오답풀이] https://haula.tistory.com/entry/%EC%88%98%ED%95%99-1934%EB%B2%88-%EC%B5%9C%EC%86%8C%EA%B3%B5%EB%B0%B0%EC%88%98-C-%ED%92%80%EC%9D%B4%EB%B2%95
#include<iostream>
 
using namespace std;
 
int divide(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return divide(y, x % y);
}
 
int main()
{
    int T;
    int A, B;
    cin >> T;
 
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        if (A >= B)
        {
            cout << A * B / divide(A, B) << "\n";
        }
        else
            cout << A * B / divide(B, A) << "\n"; 
    }
}
