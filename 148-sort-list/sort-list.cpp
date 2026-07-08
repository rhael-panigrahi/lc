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

    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* head = dummyNode;
        while(left!=NULL && right!=NULL){
            if(left->val<=right->val){
                dummyNode->next = left;
                dummyNode = dummyNode->next;
                left=left->next;
            }else{
                dummyNode->next = right;
                dummyNode = dummyNode->next;
                right=right->next;
            }
        }
        if(left==NULL)dummyNode->next=right;
        else dummyNode->next = left;

        return head->next;

        
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast = fast->next->next;
        }
        ListNode* secondNode = slow->next;
        slow->next = nullptr;
        ListNode* left = sortList(head);
        ListNode* right = sortList(secondNode);
        return merge(left,right);
    }

};