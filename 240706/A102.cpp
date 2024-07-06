// https://leetcode.com/problems/transpose-matrix/submissions/1311225351


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        //vector<vector<int>> check;
        vector<vector<int>> t_matrix; 
        int m_size =  matrix.size(); 
// intialize 
        // for(int i = 0; i < m_size; i++)
        // {
        //     vector<int> element; 
        //     for(int j = 0; j < matrix[i].size(); j++) element.push_back(0);
        //     check.push_back(element); 
        // }
            

// transpose 

  if(matrix.size() == matrix[0].size())
  {
        for(int i =0; i < matrix.size(); i++) // i : row 
        {
            vector<int> t_element; 

            for(int j =0; j < matrix[i].size(); j++) // j : col 
            {
                int t_element_value = matrix[i][j]; 
                
                if(i != j)
                {
                    t_element_value = matrix[j][i];
                    // check[j][i] = check[i][j] = 1; 
                }

                t_element.push_back(t_element_value); 
            }

            t_matrix.push_back(t_element); 
        }
  }

  else
  {
    for(int i = 0; i < matrix[0].size(); i++)
    {
        vector<int> element; 
        for(int j = 0; j < matrix.size(); j++)
        {
            element.push_back(matrix[j][i]); 
        }

        t_matrix.push_back(element);

    }
  }

        return t_matrix; 
    }
};