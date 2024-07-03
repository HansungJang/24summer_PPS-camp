// s 18 : 20 
// linear sorting / idea, ��¼�� �ߺ� �Ǵ� ���� ����2�� (pop, find, size ������ Ȱ��)
// https://cplusplus.com/reference/vector/vector/?kw=vector
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;  

        while(nums.size() >= 1)
        {
            int value = nums.back(); 
            nums.pop_back(); 

            if(find(nums.begin(), nums.end(), value) != nums.end()) {nums.erase(find(nums.begin(), nums.end(), value));}
            else
            {
                single = value; 
                break; 
            }
        }

    //    printf("%d", single);
    return single; 
    }
};