#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int case_num  = 0; 
    cin >> case_num; 

    int** score_list = new int* [case_num]; // test_case ���� ����迭 

// Data �Է� 
    for(int i = 0 ; i < case_num; i++)
    {
        int student_num; 
        cin >> student_num; 
        score_list[i] = new int[student_num + 1]; // 0��° index�� �л� �� ���� 
        
        for(int j = 0; j <= student_num; j++)
        {
            if(j == 0) score_list[i][j] = student_num; 
            else
            {
                int input; 
                cin >> input; 
                score_list[i][j] = input;
            }   
        }
    }
    
// ��� ���ϱ� 
    double *avg_student = new double[case_num]; //��� ����迭 

    for(int i = 0; i < case_num; i++)
    {
        int total_sum = 0; 
        int student_num = score_list[i][0];
        double avg = 0.0; 
        // test_case�� ��� ���� 
        for(int j = 1; j <= student_num; j++ ) total_sum += score_list[i][j]; 
        avg = (double)total_sum / student_num; 
        printf("total_sum: %d, student_num: %d \n", total_sum, student_num); 
        printf("avg: %f\n", avg); 
        // ��� �̻� �л� Ȯ�� 
        int high_student = 0; 
        for(int j = 1; j <= student_num; j++ )
        {
            if(score_list[i][j] > avg) high_student++;  
        } 
        avg_student[i] = high_student * 100.0 / student_num ;  
    }

// ��� 
    for(int i = 0; i < case_num; i++)
    {
        printf("%.3f%%\n", avg_student[i]);
    }
 
    for(int i = 0; i < case_num; i++){delete[] score_list[i];}
    delete[] score_list; 
    delete[] avg_student; 
    
    return 0; 
}