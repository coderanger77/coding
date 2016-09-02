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
        auto i = l1, j = l2;
        ListNode *k = NULL, *start = NULL;
        int s, c = 0;
        while(i || j) {
            s = (i ? i->val : 0)+ (j ? j->val : 0) + c;
            c = s/10;
            s %= 10;
            if(!k) {
                k = new ListNode(s);
                start = k;
            }
            else {
                k->next = new ListNode(s);
                k = k->next;
            }
            //cout<<k->val;
            if(i) i = i->next;
            if(j) j = j->next;
        }
        if(c)
            k->next = new ListNode(c);
        return start;
    }
};
