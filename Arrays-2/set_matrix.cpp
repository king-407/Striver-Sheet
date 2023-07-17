/*
    Problem Link: https://leetcode.com/problems/set-matrix-zeroes/
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int rows = matrix.size(), cols = matrix[0].size();
        bool fillFirstCol = false;
        
        for(int i = 0; i < rows; i++) {
           
            if(matrix[i][0] == 0)
                fillFirstCol = true;
            for(int j = 1; j < cols; j++) {
               
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
       
        for(int i = rows - 1; i >= 0; i--) {
            
            for(int j = cols - 1; j >= 1; j--) {
          
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
          
            if(fillFirstCol)
                matrix[i][0] = 0;
        }
     }
};