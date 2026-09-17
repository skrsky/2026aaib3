//week02-4.cpp學習計畫Basic 第2題
// Leetcode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {}; //有26個回收桶，裡面都是0
        for (char c : s ) {  //C++ 進階for迴圈寫法
            U[c-'a'] ++; //把字母放到對應的回收桶裡
        }
        for (char c : t ){ //C++ 進階for迴圈寫法
            U[c-'a'] --; //把對應的桶子哩，拿掉一個字母
            if(U[c-'a']<0)return c; //如果字母不夠用 ，找到兇手
        }
        return 0;
    }
};
