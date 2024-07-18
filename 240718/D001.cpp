#include <iostream>
#include <string>
#include <vector>

using namespace std; 


bool action(int& red, int& blue)
{
   bool result = false; 

   for(int i = 1; i <= (red / 2); i++)
   {
        if(red - (2 * i) >= 0)
        {
            red -= (2 * i); 
            blue += i; 
            result = true; 
            break; 
        }
   }

    if(result == false )
    {
        for(int i = 1; i <= (blue / 2); i++)
         {
            if(blue - (2 * i) >= 0)
            {
                blue -= (2 * i); 
                red += i; 
                result = true; 
                break; 
            }
         } 
    }

    return result; 
}


int main()
{
    string player[] = {"KJ", "DH"}; 
    int testcase;
    vector<string> win; 

    cin >> testcase; 
    for(int i = 0; i < testcase; i++)
    {
        int red, blue;
        int wincount = 0; 
        cin >> red >> blue; 

        while(action(red, blue)){ wincount++; } 
        string win_player = (wincount % 2 > 0) ? player[0] : player[1];   
        win.push_back(win_player); 
    }

    for(int i = 0; i < win.size(); i++)
    {
        cout << "#" << (i+1) << " " << win[i] << endl;  
    }


}