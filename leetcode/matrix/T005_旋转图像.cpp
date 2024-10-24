//
// Created by 胡科甲 on 10/24/2024.
//
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix.size();
        int flag_col0 = false, flag_row0 = false;
        for (int i = 0; i < m; ++i) {
            if (!matrix[i][0]){
                flag_col0 = true;
            }
        }

        for (int j = 0; j < n; ++j) {
            if (!matrix[0][j]){
                flag_row0 = true;
            }
        }

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (!matrix[i][0] || !matrix[0][j]){
                    matrix[i][j]=0;
                }
            }
        }

        if (flag_col0) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
        if (flag_row0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};