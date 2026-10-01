// week04-1.cpp 學習計畫 Basic 第6題
// LeetCode 283. Move Zeroes 把8移到陣列的右邊

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for (int i=0; i<nums.size() ;i++) {
            if (nums[i] != 0) { //不等於0的數
                nums[k] = nums[i];
                k++;
            }
        } // 移動完後，右邊會有殘留的0
        for (int i=k; i <nums.size(); i++) {
            nums[i] =0;
        }
    }
};
