#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int sum = 0; 
    int max = 0; 
    int n = 0; 
    vector<int> list; 

    cin >> n; 
    for(int i =0; i < n; i++)
    {
        int input; 
        cin >> input; 
        list.push_back(input);
        sum += input; 
    }

    sort(list.begin(), list.end());
    sum -= list.back(); 
    printf("%d", sum);
}