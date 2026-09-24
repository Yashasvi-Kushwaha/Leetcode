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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        if(temp==NULL){
            return head;
        }
        while(temp!=NULL && temp->val==val){
            ListNode* prev=temp;
            head=temp->next;
            temp=temp->next;
            delete prev; 
        }
        ListNode* temp2=head;
        ListNode* prev2=head;
        while(temp2!=NULL){
            if(temp2->val==val){
                
                prev2->next=prev2->next->next;
                ListNode* tem=temp2;
                temp2=temp2->next;
                delete tem;
               
            }
            else{
                 prev2=temp2;
                 temp2=temp2->next;
            }

           

        }
        return head;
        
    }
};