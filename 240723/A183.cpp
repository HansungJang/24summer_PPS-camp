// 고양이 출력
#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string cat[] = 
    {"\\    /\\",
     " )  ( ')", 
     "(  /  )",
     "\\(__)|"
    };  

    for(string i : cat ){cout << i << endl;}
    return 0; 
}
