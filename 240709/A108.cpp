#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int size, top, bottom; 
    int* list; 
    int* rlist; 
    vector<vector<int>> rsum; 
    
    cin >> size; 
    list = new int[size];
    rlist = new int[size]; 

    //#1. input
    for(int i = 0; i < size; i++)
    {
        int input; 
        cin >> input; 

        list[i] = input; 
    }

    //#2. reverse input 
    for(int i = 0; i < size; i++)
    {
        int input = list[i];
        rlist[i] = 0; 
        while(input > 0)
        {
            rlist[i] = (rlist[i] * 10) + (input % 10);
            input /= 10;  
        }
    }

    // #3. sum 
    for(int i = 0; i < size; i++)
    {
        list[i] = list[i] + rlist[i]; 
        vector<int> elem; 
        while(list[i] > 0)
        {
            int num = list[i] % 10; 
            elem.push_back(num); 
            list[i] /= 10; 
        }

        rsum.push_back(elem); 
    }

    // #4. palindrome print
    for(int i = 0; i < size; i++)
    {
        int elem_size = rsum[i].size();
        int end = elem_size -1; 
        int start = 0; 
        int palindrome_check = 1;

        while(start < end)
        {
            if(rsum[i][start] != rsum[i][end]) {palindrome_check = 0; break;}
            start++; 
            end--; 
        }  

        (palindrome_check > 0 ) ? cout << "YES\n" : cout << "NO\n";  
    }

    


    delete[] list, rlist; 
}