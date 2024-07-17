// // string::find_first_of
// #include <iostream>       // std::cout
// #include <string>         // std::string
// #include <cstddef>        // std::size_t

// int main ()
// {
//   std::string str ("Please, replace the vowels in this sentence by asterisks.");
//   std::size_t found = str.find_first_of("a");
//   while (found!=std::string::npos)
//   {
//     str[found]='*';
//     found=str.find_first_of("a",found+1);
//   }

//   std::cout << str << '\n';

//   return 0;
// }


// 참고 reference 
// 1. [std::string::find_first_of] 
// [LINK] (cplusplus) / https://cplusplus.com/reference/string/string/find_first_of/ 

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        bool check =  false; 

        size_t start  = s.find_first_of(goal[0]);


        // #1. goal문자열의 시작 문자, 중복되지 않는 경우 만족
        if(s.length() == goal.length() && start != string::npos)
        {

            while(start != string::npos && check == false)
            {
                int count = 0; 
             
            //#1.  string 변환 
                vector<char> res; 
                for(int i = start; i < s.length(); i++ ){res.push_back(s[i]); } 
                for(int i = 0; i < start; i++) { res.push_back(s[i]); } 

            //#2. string 비교 
 
                for(int i = 0; i < goal.length(); i++)
                {
                    if(res[i] != goal[i]){check = false; break;}
                    count++; 
                }
                if(count == goal.length()) check = true; 

                start = s.find_first_of(goal[0], start + 1); //#1. 해결 아이디어 
            
            }

        } 

        return check; 
    }
};