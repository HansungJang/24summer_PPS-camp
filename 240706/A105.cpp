#include <iostream>
#include <vector>
#include <string>

#define INF 10 

using namespace std; 




int main()
{
    vector<vector<string>> matrix; 
    vector<string> list; 
    int num; 

//#1. matrix 생성 
    for(int i = 0; i < INF; i++)
    {
        vector<string> element; 
        for(int j = 0; j < INF; j++)
        {
            string elem = to_string(i+1) + "/" + to_string(j+1); 
            element.push_back(elem); 
        }

        matrix.push_back(element);
    }

    // for(int i = 0; i < INF; i++)
    // {
    //     for(int j = 0; j < INF; j++) printf("%s ", matrix[i][j].c_str());
    //     printf("\n");
    // }


//# 탐색순서 입력 
cin >> num; 

//#2. 지그재그 탐색

int row = 0, col = 0; 
int count = 0;
while(count < num)
{
    if(row == 0 && col == 0){list.push_back(matrix[row][col]); col++; count++; continue; }

    if(row+1 < INF-1 && col+1 < INF-1)
    {
        
        if(row > col)
        {
            row++;
            while(row > 0)
            {
                list.push_back(matrix[row][col]);
                row--;
                col++; 
                count++; 
            }
            continue; 
        }

        else if(col > row)
        { 
            col++;
            while(col > 0)
            {
                list.push_back(matrix[row][col]);
                row++;
                col--; 
                count++; 
            }
            continue; 

        }

    }

    else
    {
        if(row > col)
        {
            col++;
            int temp = row;  
            while(col != temp)
            {
                list.push_back(matrix[row][col]);
                row--;
                col++; 
                count++; 
            }
            continue; 

        }

        else
        {
            row++; 
            int temp = col;  
            while(row != temp)
            {
                list.push_back(matrix[row][col]);
                row++;
                col--; 
                count++; 
            }
            continue; 

        }
    }

}

printf("%s", list[num-1].c_str());

    return 0; 
}