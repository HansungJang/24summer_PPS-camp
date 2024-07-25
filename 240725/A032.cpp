
// https://tasddc.tistory.com/77

#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main()
{
    vector<vector<int>> member_num;
    queue<int> k, n;
    int test_case;

    cin >> test_case;
    int max_floor = 0, max_room = 0;
    for (int i = 0; i < test_case; i++)
    {
        int floor, room;
        cin >> floor;
        cin >> room;

        if (floor > max_floor) max_floor = floor;
        if (room > max_room) max_room = room;

        k.push(floor);
        n.push(room);
    }

    cout << "max_floor : " << max_floor << endl;
    cout << "max_room : " << max_room << endl;
    // intialize

    vector<int> intial;
    for (int i = 0; i <= max_room; i++)
    {
        intial.push_back(i);
    }
    member_num.push_back(intial);

    for (int i = 1; i <= max_floor; i++)
    {
        vector<int> elem;
        for (int j = 0; j <= max_room; j++)
        {
            if (j == 0) elem.push_back(0);
            else
            {
                elem.push_back(member_num[i - 1][j] + elem[j - 1]);
            }
        }
        member_num.push_back(elem);
    }

    cout << " k.size : " << k.size() << endl;

    while (k.size() > 0)
    {
        printf("%d \n", member_num[k.front()][n.front()]);
        k.pop();
        n.pop();

    }


    return 0;
}