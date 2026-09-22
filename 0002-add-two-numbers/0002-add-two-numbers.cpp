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
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        int carry=0;
        while(t1!=NULL && t2!=NULL){
            int sum=t1->val+t2->val+carry;
            int value=sum;
            if(sum==1){
                carry=0;
            }
            while(value>1){
                sum=sum%10;
                carry=value/10;
                value=value/10;
            }
            ListNode* newNode=new ListNode(sum);
            if(newhead==NULL){
                newhead=newNode;
                newtail=newNode;
            }
            else{
                newtail->next=newNode;
                newtail=newNode;
            }
            t1=t1->next;
            t2=t2->next;
        }
        while(t1!=NULL){
            int sum=t1->val+carry;
            int value=sum;
            if(sum==1){
                carry=0;
            }
            while(value>1){
                sum=sum%10;
                carry=value/10;
                value=value/10;
            }
            ListNode* newNode=new ListNode(sum);
            if(newhead==NULL){
                newhead=newNode;
                newtail=newNode;
            }
            else{
                newtail->next=newNode;
                newtail=newNode;
            }
            t1=t1->next;

        }
        while(t2!=NULL){
            int sum=t2->val+carry;
            int value=sum;
            if(sum==1){
                carry=0;
            }
            while(value>1){
                sum=sum%10;
                carry=value/10;
                value=value/10;
            }
            ListNode* newNode=new ListNode(sum);
            if(newhead==NULL){
                newhead=newNode;
                newtail=newNode;
            }
            else{
                newtail->next=newNode;
                newtail=newNode;
            }
            t2=t2->next;

        }
        if(carry>0){
            ListNode* newNode=new ListNode(carry);
            if(newhead==NULL){
                newhead=newNode;
                newtail=newNode;
            }
            else{
                newtail->next=newNode;
                newtail=newNode;

        }}
        // ListNode* curr=newhead;
        // ListNode* prev=NULL;

        // while(curr!=NULL){
        //     ListNode* next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }

        return newhead;
        
    }
};