//week08-3_again.cpp 學習計畫 Matrix 再寫一次
//Leetcode 54. Spiral Matrix 螺旋矩陣，繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;
        int left =0, right = N-1, up = 0, down = M-1; //四個變數
        //中間要繞圈圈 4個方向: 往右、往下、往左、往上
        while (ans.size() < M * N) { //重複做，直到收集齊全部的格子
            int i, j;
            i = up; //最上面這條要往右
            for (int j=left; j<=right; j++){
                ans.push_back(matrix[up][j]);
            }
            up++; //走完了最上面這條，整條刪掉
            j=right; //最右邊這條，要往下
            for(int i=up; i<=down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; //走完了最右邊這條，整條刪掉
            if(ans.size() == M * N) break; //檢查是否已經收集完所有格子
            i=down; //最下面這條，要往左;
            for(int j=right; j>=left; j--) {
                ans.push_back(matrix[down][j]);
            }
            down--;//走完了最下面這條，整條刪掉
            j= left;//最左邊這條，要往上
            for(int i=down; i>=up;i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;//走完了最左邊這條，整條刪掉
        }

        return ans;
    }
};
