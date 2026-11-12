//week10-1a.cpp 學習計畫 Math 第一題 有幾個奇數 (暴力for迴圈 沒用到數學)
//Leetcode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low; i<=high; i++){
            if(i%2==1) ans++;
        }
        return ans;
    }
};
