class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ribbon;
         int north =0;
         int south = static_cast<int>(matrix.size()) - 1;
         int west =0;
         int east = static_cast<int>(matrix[0].size()) -1;
         while(north <= south && west <= east){
            for (int col = west; col <= east; col++){
                ribbon.push_back(matrix[north][col]);
            }
            north++;
            for (int row = north; row <= south; row++){
                ribbon.push_back(matrix[row][east]);
            }
            east--;
            if (north <= south){
                for(int col = east; col >= west; col--){
                    ribbon.push_back(matrix[south][col]);
                }
                south--;
            }
            if(west <= east){
                for(int row = south; row >= north; row--){
                    ribbon.push_back(matrix[row][west]);
                }
                west++;
            }
         }
         return ribbon;
    }
};
