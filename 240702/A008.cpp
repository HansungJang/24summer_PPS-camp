#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int case_num  = 0; 
    cin >> case_num; 

    int** score_list = new int* [case_num]; // test_case 정보 저장배열 

// Data 입력 
    for(int i = 0 ; i < case_num; i++)
    {
        int student_num; 
        cin >> student_num; 
        score_list[i] = new int[student_num + 1]; // 0번째 index는 학생 수 저장 
        
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
    
// 평균 구하기 
    double *avg_student = new double[case_num]; //평균 저장배열 

    for(int i = 0; i < case_num; i++)
    {
        int total_sum = 0; 
        int student_num = score_list[i][0];
        double avg = 0.0; 
        // test_case의 평균 연산 
        for(int j = 1; j <= student_num; j++ ) total_sum += score_list[i][j]; 
        avg = (double)total_sum / student_num; 
        printf("total_sum: %d, student_num: %d \n", total_sum, student_num); 
        printf("avg: %f\n", avg); 
        // 평균 이상 학생 확인 
        int high_student = 0; 
        for(int j = 1; j <= student_num; j++ )
        {
            if(score_list[i][j] > avg) high_student++;  
        } 
        avg_student[i] = high_student * 100.0 / student_num ;  
    }

// 출력 
    for(int i = 0; i < case_num; i++)
    {
        printf("%.3f%%\n", avg_student[i]);
    }
 
    for(int i = 0; i < case_num; i++){delete[] score_list[i];}
    delete[] score_list; 
    delete[] avg_student; 
    
    return 0; 
}