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
    bool isPalindrome(ListNode* head) {
        ListNode *newhead=NULL;
        ListNode* newtail=NULL;

        ListNode* temp=head;
        while(temp!=NULL){
            ListNode *newNode=new ListNode(temp->val);
            if(newhead==NULL){
                newhead=newNode;
                newtail=newNode;
            }
            else{
                newtail->next=newNode;
                newtail=newNode;
            }
        temp=temp->next;
        }
        ListNode *curr=newhead;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        newhead=prev;
        ListNode* t1=head;
        ListNode* t2=newhead;
        while(t1!=NULL && t2!=NULL){
            if(t1->val==t2->val){
                t1=t1->next;
                t2=t2->next;
            }
            else{
                return false;
            }
        }
        return true;    
    }
};