// idea B�� ���� �������� A�� ��迭�ؾ��� 
// N <= 50
// A, B elements <= 100 

// 1 trial 
// B�� ���� ū �ε���, A�� �ּҰ� index ����������4

// not solved yet 


// TIME OVER / https://www.acmicpc.net/problem/1026

#include <iostream>
#include <vector>
#include <algorithm> // A Sort 

using namespace std; 

int S(int N, int* A, int* B)
{
    int sum = 0; 
    for(int i =0; i < N; i++) sum += A[i]*B[i]; 
    return sum; 
}

void Input(int* list, int N)
{
    for(int i = 0; i < N; i++)
    {
        int input; 
        cin >> input; 
        list[i] = input; 
    }
}

void PrintList(int* list, int N)
{
    for(int i =0; i < N; i++) printf("%d ", list[i]);
    printf("\n");
} 


int main()
{
    int N = 0; 
    int* A; 
    int* B; 
    int result; 

//�Է� 
    cin >> N; 
    A = new int[N];
    B = new int[N]; 

    Input(A, N);
    Input(B, N);

// A list ���� �������� ���� 
    vector<int> A_asce_sort(A, A + N);
    sort(A_asce_sort.begin(), A_asce_sort.end());  


// B�� �ּڰ��� ã�� �� (max�� index)
    int* B_checked = new int[N]; 
    int* A_list_index = new int[N]; 

    for(int i =0; i < N; i++) B_checked[i] = 0;  // intialize 

// B�� �ּڰ��� ã�� (RETRY)
    for(int i =0; i < N; i++)
    {
        int max = B[i]; 
        int max_index = i ; 

        for(int j =0; j < N; j++)
        {
            if(B_checked[j] == 0 && max < B[j])
            {
                max = B[j];
                A_list_index[i] = j; 
                B_checked[j] ++;
            }
        }
    }

// A�� ���� 
    for(int i = 0; i < N; i++)
    {
        A[A_list_index[i]] =  A_asce_sort[i]; 
    }

PrintList(A_list_index, N);
PrintList(A, N);

//��� 
    result = S(N, A, B);
    printf("%d", result);

    delete[] A_list_index; 
    delete[] B_checked;
    delete[] A; 
    delete[] B;  
    return 0; 
}