// ±ÕÇü ¹ÃÁ¦ 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std; 

string balanceCheck(string input)
{
    string result = "no"; 
    vector<char> check; 
    int lnum = 0; 
    int rnum = 0;

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == '(' || input[i] == '[' )
        {
            check.push_back(input[i]);
            lnum++; 
        }

        if(input[i] == ')' || input[i] == ']' )
        {
            if(check.size() > 0)
            {
                char last_check = check.back(); 
                if(last_check == '(' && input[i] == ')'){  rnum++; }

                else if(last_check == '[' && input[i] == ']'){ rnum++; }
                else{ break; }

                check.pop_back(); 

            }
        }
    }

    if(lnum == rnum){result = "yes";}


    return result; 
}


int main()
{
    vector<string> inlist; 

    while(1)
    {
        string input; 
        getline(cin, input);

        if(input == ".") break; 
        else
        {
            inlist.push_back(balanceCheck(input)); 
        }
    }

    for(int i = 0; i < inlist.size(); i++){cout << inlist[i] << endl;}

    return 0; 
}