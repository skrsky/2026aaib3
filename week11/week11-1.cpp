//week11-1.cpp 厩策璸礶 Linked List 材2肈
//Leetcode 206. Reverse Linked List
//渺挡﹃, 惠璶ㄢㄣ腊Γ (1) ListNode * ans = new ListNode(999);
//(2) 或рLinked List 场ǐΩ
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector <int> a;
        while(head !=nullptr){
            a.push_back(head->val);
            head = head->next;
        }
        ListNode*ans = new ListNode(999);
        ListNode*now = ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans ->next;
        //ListNode* now = head; // (2) 场ǐΩ
        //while (now != nullptr) { // (2)场ǐΩ ノwhileǐ
            //cout << now->val << " "; //val
            //now = now -> next; //传
        //}
        //ListNode *ans = new ListNode(999); // (1) 或рLinked List  Node 非称
        //return ans;
    }
};
