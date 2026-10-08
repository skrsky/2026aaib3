//week05-2.cpp 學習計畫 Bulit-in Functtions 第2題
//Leetcode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i< s.length(); i++){ //逐字母處理
            if (isupper(s[i])) s[i]= s[i] - 'A' +'a';
        }
        return s;
    }
};
