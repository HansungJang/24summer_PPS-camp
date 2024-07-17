#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool SortAlpha(string a, string b)
{
    return (a[0] < b[0]);
}

int FIndIndex(string name, vector<string> list)
{
    int index = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (name == list[i]) { index = i; break; }
    }

    return index;
}

int main()
{
    int isize = 0;
    vector<int> list_count;
    vector<string> list_name;

    cin >> isize;
    cin.ignore();  // buffer 비워주는 작업이 필요 

    // 입력 
    for (int i = 0; i < isize; i++)
    {
        string name;
        getline(cin, name);
        if (find(list_name.begin(), list_name.end(), name) != list_name.end())
        {
            int index = FIndIndex(name, list_name);
            list_count[index]++;
        }
        else
        {
            list_name.push_back(name);
            list_count.push_back(1);
        }
    }

    // 정렬
    vector<string> top_rate;
    int max = 0;
    for (int i = 0; i < list_count.size(); i++)
    {
        if (max <= list_count[i])
        {
            max = list_count[i];
            if (max < list_count[i]) top_rate.clear();
            top_rate.push_back(list_name[i]);
        }
    }

    sort(top_rate.begin(), top_rate.end(), SortAlpha);
    cout << top_rate.front();

    return 0;
}