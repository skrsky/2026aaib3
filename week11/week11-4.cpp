//week11-4.cpp 學習計畫 Linked List 第1題
//Leetcode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans = new ListNode(999);
        ListNode*now=ans;
        //如果左邊這條、不是空空的 右邊有值'不是空空的
        while(list1 != nullptr && list2 != nullptr) {
            if( list1->val < list2->val ) {
                now->next = new ListNode( list1->val);
                now = now->next;
                list1=list1->next;
            } else {
                now->next = new ListNode(list2->val);
                now = now->next;
                list2 = list2->next;
            }
        }
        if(list1) now->next = list1;
        if(list2) now->next = list2;
        return ans->next;
    }
};
