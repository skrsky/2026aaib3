//week09-1.cpp 學習計畫 Matrix 第2題
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans =0;
        for(int i=0; i<N;i++) {
            ans+=mat[i][i];
        }
        for(int i=0;i<N; i++) {
            ans += mat[N-i-1][i];
        }
        if(N%2==1) ans -= mat[N/2][N/2];
        return ans;
    }
};
