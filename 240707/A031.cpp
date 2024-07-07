//

#include<iostream>

using namespace std; 

int main()
{
    int n, m;
    int min_count = 0; 
    cin >> n >> m; 
    
    min_count = n * m - 1; 
    printf("%d", min_count);
}