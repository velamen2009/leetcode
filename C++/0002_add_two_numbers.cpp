/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1){ return l2; }
        if(!l2){ return l1; }
        int carry = 0;
        ListNode *ans = NULL, *p = NULL, *p1 = l1, *p2 = l2;
        while(true){
            if(0 == carry && NULL == p1 && NULL == p2){
                return ans;
            }
            int val = 0;
            if(p1){
                val += p1->val;
                p1 = p1->next;
            }
            if(p2){
                val += p2->val;
                p2 = p2->next;
            }
            val += carry;
            carry = val / 10;
            val %= 10;
            ListNode *q = new ListNode(val);
            if(NULL == ans){
                ans = q;
                p = q;
            }
            else{
                p->next = q;
                p = p->next;
            }
        }
        return NULL;
    }
};
