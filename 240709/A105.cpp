// ���� ���  idea, �밢�� ��������, (¦��, Ȧ��) ������ ���� ������ ��� 
// ��Ģ 
// 1. ���� ���� �� 1�� ���� 
// 2. Ȧ��: ���� ~ �ش� ���� ��ȣ ���� ��ŭ ����
//    ¦��: �и� ~ �ش� ���� ��ȣ ���� ��ŭ ���� 
// 3. ã�� index�� ��ȣ = �Է� ���� -  �Է� ������ �ش翭 ������ ������ �� ���� 

// ���� ��ȣ: 1 
// 1 | 1 / 1 

// 2 
// 2 | 1 / 2 
// 3 | 2 / 1 

// 3 
// 4 | 3 / 1 
// 5 | 2 / 2
// 6 | 1 / 3  

// 4
// 7 | 1 / 4 
// 8 | 2 / 3
// 9 | 3 / 2 
//10 | 4 / 1 

#include <iostream>

using namespace std; 

int main()
{
    int curr_row  = 1; 
    int index_num = 0;
     
    cin >> index_num; 

    while(index_num > curr_row)
    {
        index_num -= curr_row; 
        curr_row++; 
    }

    if(curr_row % 2 == 0)
    {
        cout << index_num << " / " << curr_row + 1 - index_num; 
    }
    else
    {
        cout << curr_row + 1 - index_num << " / " << index_num ; 
    }

    return 0; 
}