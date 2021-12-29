/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void create(ListNode*& n, int val, int& c, ListNode*& curr){
        if(n==NULL){
            n = new ListNode(val%10);
            curr = n;
        }
        else{
            curr-> next = new ListNode(val%10);
            curr = curr->next;
        }
        c=val/10;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* ans = NULL, *curr = NULL;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL && l2!=NULL){
                create(ans, l1->val+l2->val+carry, carry, curr);
                //cout<< carry<<" ";
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l2==NULL){
                create(ans, l1->val+carry, carry, curr);
                l1 = l1->next;
            }
            else{
                create(ans, l2->val+carry, carry, curr);
                l2 = l2->next;
            }
        }
        if(carry>0){
            create(ans, carry, carry, curr);
        }
        return ans;
    }
};