class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow = 0, scol = 0;
        int erow = matrix.size()-1, ecol = matrix[0].size()-1;
        vector<int> ans;

        while(srow<=erow && scol<=ecol){
            // Top
            for(int i=scol; i<=ecol; i++){
                ans.push_back(matrix[srow][i]);
            }

            // Right
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(matrix[i][ecol]);
            }

            // Botton
            for(int i=ecol-1; i>=scol; i--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }

            // Left
            for(int i=erow-1; i>=srow+1; i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }

            srow++; erow--; scol++; ecol--;
        }

        return ans;
    }
};