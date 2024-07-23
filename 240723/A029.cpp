#include <iostream>
#include <vector>
#include <string>

using namespace std; 


void open_door(vector<int> input, int start_open)
{
    long long int border = 0; 
    string odd, even ; 
    vector<string> open_way; 

    odd  = (start_open > 0) ? "1" : "0" ; 
    even = (start_open > 0) ? "0" : "1" ; 

    for(int i : input)
    {
        border = (border * 10) + i; 
    }


    for(long long int i = 1; i <= border; i++)
    {
        if(i % 2 == 0){open_way.push_back(even);}
        else {open_way.push_back(odd);}
        
        if(open_way.size() > 1 && (open_way[i-2] == open_way[i-1]) || (i % 2 == 0) && (i % 3 == 0))
        {
            open_way.clear(); 
            open_way.push_back("Love is open door");
            break; 
        }
    }

    int count = 0; 
    for(string i : open_way) 
    {
        if(count > 0 && open_way.size() > 1) std::cout << i << endl;
        if(open_way.size() == 1){std::cout << i << endl; }
        count++;  
    }
}


int main()
{
    string num; 
    int start_open; 
    vector<int> input;


    getline(cin, num); 
    cin >> start_open; 

    for(int i = 0; i < num.length(); i++)
    {
        char a = num[i]; 
        int num_in = a - '0'; 
        input.push_back(num_in);
    }

    open_door(input, start_open); 


    return 0; 
}