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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* head = dummyNode;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                dummyNode->next = temp1;
                dummyNode=dummyNode->next;
                temp1=temp1->next;
            }else{
                dummyNode->next = temp2;
                dummyNode= dummyNode->next;
                temp2 = temp2->next;
            }  
        }
        if(temp1!=NULL){
            dummyNode->next = temp1;
        }
        if(temp2!=NULL){
            dummyNode->next = temp2;
        }
        return head->next;
    }
};