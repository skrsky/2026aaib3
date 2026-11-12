//week10-1b.cpp 學習計畫 Math 第一題 有幾個奇數 (暴力for迴圈 沒用到數學)
//Leetcode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
