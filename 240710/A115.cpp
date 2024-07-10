class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // 1set >
        // b: 1,
        // a: 1,
        // l: 2,
        // o: 2,
        // n: 1

        int number = 0 ; 
        int size = 5; 
        int* size_char = new int[size]; 

        //intialize 
        for(int i =0; i < size; i++) {size_char[i] = 0; }

        //갯수 분활 
        for(int i = 0; i < text.length(); i++)
        {
            char c = text[i]; 
            if(c == 'b') size_char[0]++; 
            else if(c == 'a') size_char[1]++; 
            else if(c == 'l') size_char[2]++;
            else if(c == 'o') size_char[3]++;
            else if(c == 'n') size_char[4]++; 
        }

        if(size_char[2] % 2 != 0){ size_char[2] -= (size_char[2]%2); }
        if(size_char[3] % 2 != 0){ size_char[3] -= (size_char[3]%2); }

        //*단어 갯수 연산 
        //#1. minimun갯수 확인, 'l', 'o'인 경우 해당 갯수 짝수인지 확인 
        int min = size_char[0]; 
        int min_index = 0; 
        for(int i = 0; i < size; i++)
        {
            if(min > size_char[i]) {min = size_char[i];  min_index = i; }
        }

        if(min > 0)
        {
            while(min > 0)
            {
                int end = 0; 
                for(int i = 0; i < size; i++)
                {
                    int sub = 1; 
                    if(i == 2 || i == 3) sub = 2; 

                    if(size_char[i] - sub < 0) {end = 1; break;}
                    size_char[i] -= sub; 
                }

                if(end == 1) break; 
                min--; 
                number++; 
            }
        }

        return number;     
    }



};