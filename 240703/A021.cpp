// https://www.acmicpc.net/problem/2010
#include <iostream>
using namespace std; 

int main()
{
    int plug_num = 0; 
    int plug_hole_num = 0; 

    cin >> plug_num; 
    for(int i =0; i < plug_num; i++)
    {
        int input; 
        cin >> input;
        plug_hole_num += input; 
    }

    plug_hole_num -= (plug_num - 1);
    printf("%d", plug_hole_num);
}