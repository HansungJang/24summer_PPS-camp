#include <iostream>
#include <queue>
#include <math.h>

using namespace std; 

int main()
{
    int num1, num2; 
    queue<int> num_list; 
    
    cin >> num1; 
    cin >> num2; 

    while(num2 > 0)
    {
        int mut_num = num2 % 10; 
        num_list.push(num1 * mut_num); 
        num2 /= 10; 
    }

    int sum = 0; 
    int size = num_list.size();
    for(int i  = 0; i < size; i++)
    {
        sum += num_list.front() * pow(10, i);
        cout << num_list.front() << endl; 
        num_list.pop();
    }
    cout << sum; 


}