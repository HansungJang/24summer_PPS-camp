#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string dog[] = 
    {
        "|\\_/|",
        "|q p|   /}",
        "( 0 )\"\"\"\\ ", 
        "|\"^\"`    |", 
        "||_/=\\\\__|"
    }; 

    for(string i : dog) cout << i << endl; 
    return 0; 
}