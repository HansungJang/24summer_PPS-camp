class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator it;
        vector<int> er_index; 
        int zero = 0; 
        int count = nums.size(); 

        for(int i = 0; i < count; i++)
        {
            if(nums[i] == 0)
            {
                er_index.push_back(i); 
            }  
        }

        while(er_index.size() > 0)
        {
            int index = er_index.back(); 
            er_index.pop_back();
            nums.erase(nums.begin() + index); 
            nums.push_back(zero);  
        }

        cout << "["; 
        for(int i =0; i < nums.size(); i++)
        {
            cout << nums[i];
            if(i + 1 < nums.size()) cout << ", "; 
        }
        cout << "]";      
    }

};