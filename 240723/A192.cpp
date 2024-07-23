#include <iostream>

using namespace std; 

int main()
{
    int sum  = 0 ; 
    int end_num; 


    cin >> end_num; 
    for(int i = 1 ; i <= end_num; i++){sum += i;}
    cout << sum; 

}