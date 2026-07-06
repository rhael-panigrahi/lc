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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count=0;
        ListNode* temp = l1;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int count2=0;
        temp = l2;
        while(temp!=NULL){
            count2++;
            temp=temp->next;
        }
        ListNode* ans;
        if(count>=count2){ans = l1;temp = l2;}
        else {ans = l2;temp=l1;}
        int carry=0;
        ListNode* ans2=ans;
        ListNode* prev=NULL;
        while(ans!=NULL){
            int sum = 0;
            if(temp==NULL){
                sum = ans->val + carry;
            }
            else sum = ans->val+temp->val+carry;
            if(sum>=10){
            carry=1;
            }else carry = 0;

            ans->val = sum%10;
            prev = ans;
            ans= ans->next;
            if(temp!=NULL)temp=temp->next;
        }
        if(carry==1){
            ListNode* carryNode = new ListNode(carry,nullptr);
            prev->next = carryNode;
        }
        return ans2;
    }
};