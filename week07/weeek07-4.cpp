//week07-4.cpp 學習計畫 simulation 第3題 超難
// Leetcode 1275. Find Winner on a Tic Tac Toe Game 井字遊戲
class Solution {
public: // 大資料結構，裡面裝中資料結構，裡面裝小資料結構
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0}; //用C語言的陣列，模擬井字遊戲的3x3共9個格子，先放0
        string result[3] = {"Draw", "A", "B"}; //結果的字母
        int who = 1;
        for(vector<int> move : moves) { //迴圈，逐一處理中資料結構
            int i = move[0], j = move[1];
            a[i][j] = who; //現在輪到誰who來下棋
            if(a[0][0]==who && a[0][1]==who && a[0][2]==who)return result[who];//上橫
            if(a[1][0]==who && a[1][1]==who && a[1][2]==who)return result[who];//中橫
            if(a[2][0]==who && a[2][1]==who && a[2][2]==who)return result[who];//下橫

            if(a[0][0]==who && a[1][0]==who && a[2][0]==who)return result[who];//左直
            if(a[0][1]==who && a[1][1]==who && a[2][1]==who)return result[who];//中直
            if(a[0][2]==who && a[1][2]==who && a[2][2]==who)return result[who];//右直

            if(a[0][0]==who && a[1][1]==who && a[2][2]==who)return result[who]; //斜線左上、右下
            if(a[2][0]==who && a[1][1]==who && a[0][2]==who)return result[who]; //斜線左下、右下
            if(who==1) who = 2;
            else who = 1;

        }
        if(moves.size()==9) return "Draw"; //最後離開迴圈，沒有人贏，就平手
        else return "Pending";
    }
};
