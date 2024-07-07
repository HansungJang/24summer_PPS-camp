// 참조링크 
// 1. substr, https://cplusplus.com/reference/string/string/substr/
// 2. find_first_of, https://cplusplus.com/reference/string/string/find_first_of/


#include <iostream>
#include <string>

using namespace std; 

double Calculator(double num, string oper)
{
    double result = num; 

    while(oper.size() > 0)
    {
        string curr_oper; 
        if(oper.size() > 0)
        {
            size_t index = oper.find_first_of(" ");
            curr_oper = oper.substr(0, index);     
            oper = oper.substr(index+1);   
        } 

        else curr_oper = oper; 

        if(curr_oper == "@"){result *= 3; }
        else if(curr_oper == "%"){result += 5; }
        else if(curr_oper == "#" ){result -= 7;}

        if(curr_oper == oper) break; 

    }    

    return result; 
}


 int main()
 {
    int size; 
    double *result; 

    cin >> size; 
    result = new double[size]; 

    for(int i = 0; i < size; i++)
    {
        double num; 
        cin >> num;

        string oper; 
        getline(cin, oper);

        //cout << "num: " << num << ", oper: " << oper << endl; 
        result[i] = Calculator(num, oper);  
    }

    for(int i = 0; i < size; i++)
    {
        printf("%.2f\n", result[i]);
    } 

 }