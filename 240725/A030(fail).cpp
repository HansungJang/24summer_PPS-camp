// // // BST 트리 ?  
// // // idea , 양갈래 기분이 좋은 경우, 나쁜경우 
// // // N번 반복하여 내려가는 것  

// // // N   = 2 
// // // start = 1 

// // #include <iostream>
// // #include <vector>
// // #include <queue>
// // #include <math.h>

// // using namespace std; 

// // int main()
// // {
// //     int N; 
// //     int today_feel; 
// //     vector<double> feeling_percent; 
// //     queue<int> predition_table; 
// //     queue<double> feeling_prediction; 

// //     cin >> N >> today_feel; 
// //     for(int i = 0; i < 4; i++){ double percent;  cin >> percent; feeling_percent.push_back(percent);}
    
// //     (today_feel == 0 && predition_table.size() == 0) ? predition_table.push(0) : predition_table.push(1); 
// //     for(int i = 0; i <= N; i++)
// //     {
// //         for(int j = 0; j < pow(2, i); j++)
// //         {
// //             int border  = pow(2, i); 
// //             if(border % 2 != 0.0) break; 
// //             cout << "pow(2, i) : " << pow(2, i)<< endl;  
// //             (j % 2 == 0) ? predition_table.push(0) : predition_table.push(1); 
// //         }
// //     }


// //    cout << endl; 
// //    cout << "predition_table size : " << predition_table.size() << endl; 
// //    cout << "pow(2, N) : " << pow(2, N) << endl;  
// //     // while(predition_table.size() > 0)
// //     // {
// //     //     cout << predition_table.front() << " "; 
// //     //     predition_table.pop(); 
// //     // }
    
// //     feeling_prediction.push(1); 

// //     while(predition_table.size() > pow(2, N))
// //     {
// //         double per = feeling_percent.front(); 
// //         if (predition_table.front() == 0)
// //         {
// //             feeling_prediction.push(per * feeling_percent[0]);
// //             feeling_prediction.push(per * feeling_percent[1]);
// //         }

// //         else
// //         {
// //             feeling_prediction.push(per * feeling_percent[2]);
// //             feeling_prediction.push(per * feeling_percent[3]);
// //         }
// //         feeling_prediction.pop(); 
// //         predition_table.pop(); 
// //     }

// //     double bad = 0.0; 
// //     double good = 0.0; 

// //    cout << endl; 
// //    cout << "felling_prediction size : " << feeling_prediction.size() << endl; 
// //    while(feeling_prediction.size() > 0) 
// //     {
// //         cout << feeling_prediction.front() << endl;
// //         feeling_prediction.pop(); 
// //     }   

// //     // while(feeling_prediction.size() > 0)
// //     // {
// //     //    (feeling_prediction.size() % 2 == 0) ?   good += feeling_prediction.front() : bad += feeling_percent.front(); 
// //     //    feeling_prediction.pop();  
// //     // }

// //     // cout << "bad: " << bad << endl; 
// //     // cout << "good: " << good << endl; 



// //     return 0; 
// // }

// #include <iostream>
// #include <math.h>
// #include <queue>
// #define Size 4 

// using namespace std; 

// int main()
// {
//     int N; 
//     int curr_feel; // 0: Good, 1: bad 
//     double* feel_ratio; 
//     queue<double> pre_feel; 

//     feel_ratio = new double[Size];

// // 입력 
//     cin >> N >> curr_feel; 
//     for(int i = 0; i < Size; i++){double input; cin >> input; feel_ratio[i] = input; }

// // 확률 계산 
//     if(curr_feel == 0)
//     {
//         pre_feel.push(feel_ratio[0]); 
//         pre_feel.push(feel_ratio[1]); 
//     }

//     else
//     {
//         pre_feel.push(feel_ratio[2]); 
//         pre_feel.push(feel_ratio[3]); 
//     }


//     while()

//     delete feel_ratio; 
//     return 0; 
// }

// source from, https://velog.io/@publicminsu/C%EB%B0%B1%EC%A4%80-17211-%EC%A2%8B%EC%9D%80-%EB%82%A0-%EC%8B%AB%EC%9D%80-%EB%82%A0
#include <iostream>
#include <cmath>
using namespace std;
double N, goodDayPercentage, badDayPercentage, currentGoodDayPercentage, temp;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N >> currentGoodDayPercentage;

    currentGoodDayPercentage = 1 - currentGoodDayPercentage;

    cin >> goodDayPercentage >> temp >> badDayPercentage >> temp;

    while (N--) // idea 각줄의 층별로 GG. BG 확률을 더헤나가는 전략
    {
        temp = 1 - currentGoodDayPercentage;

        currentGoodDayPercentage = currentGoodDayPercentage * goodDayPercentage + temp * badDayPercentage;
    }

    int goodDay = floor(currentGoodDayPercentage * 1000);
    cout << goodDay << "\n"
         << 1000 - goodDay;

    return 0;
}