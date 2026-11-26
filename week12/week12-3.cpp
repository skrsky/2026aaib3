//week12-3.cpp 學習計畫 Linked List 第3題
//Leetcode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); //上週教的工具1
        ListNode* now = ans; //上週教的工具2
        int carry =0;
        //新的版本，只要還有剩任一條，就繼續迴圈
        while (l1 != nullptr || l2 != nullptr) { //把&&改成||
            if(l1 != nullptr) carry += l1->val; //如果l1還有，就把val加進去
            if(l2 != nullptr) carry += l2->val; //如果l2還有，就把val加進去
            now->next = new ListNode(carry %10);
            carry = carry /10; //進位，本周的重點
            now = now->next;
            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        if(carry) now->next = new ListNode(carry); //離開迴圈後，還有carry進位，不能漏掉
        return ans->next;
        //樓下的版本，沒法處理長度不同的狀況
        //while(l1 != nullptr && l2 != nullptr) {
            //int val = l1->val + l2->val + carry;
            //now->next = new ListNode(val%10);
            //carry = val /10;
            //now = now->next;
            //l1=l1->next;
            //l2=l2->next;
        //}
        //return ans;
    }
};
