#include <iostream>
#include <vector> // matrix 
#include <algorithm> // sort 
#include <utility> // pair 

using namespace std; 


// Goal, clas���� ���� ���� ������ �ϴ� ��. 
// sol,  Dyanamic Programming ���� (0-1 knapsack����)

// ���� ���� 
// trial 1 /  idea.  (start: 23:20, )
// #1. ���۽ð� ���� ���� class ���� (����) 
// #2. ����(post-class) > ��(curr-class) ������ ��� �߰� 
// #3. vector�� ���ڰ� ���� ū ��� ���� ���  

bool startTimeSort(pair<int, int> curr, pair<int, int> post)
{
    return (curr.first < post.first); 
}


int maxclassNum( vector <pair<int, int>> inputsched, int classNum)
{
    int Maxclass = 0; 
    for(int i = 0; i < classNum; i++)
    {
        int classcount = 0; 
        
        vector <pair<int, int>> elem_class; 
        elem_class.push_back(inputsched[i]);

        for(int j = i+1; j < classNum; j++)
        {
            if(elem_class.back().second < inputsched[j].first)
            {
                elem_class.push_back(inputsched[j]); 
            }      
        }

        classcount = elem_class.size(); 
        if(Maxclass < classcount) Maxclass = classcount; 
    }

    return Maxclass; 
}

int main()
{
    int classNum, Maxclass; 
    vector <pair<int, int>> inputsched; 

    cin >> classNum; 
    for(int i = 0; i < classNum; i++)
    {
        pair <int, int> classTime;  
        cin >> classTime.first >> classTime.second; 
        inputsched.push_back(classTime); 
    } 

    sort(inputsched.begin(), inputsched.end(), startTimeSort); 
    Maxclass = maxclassNum(inputsched, classNum);

    cout << Maxclass;  

    return 0; 
}