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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode *temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int req=length-n+1;  //from the start
        int count=1;
        ListNode* mov=head;
        ListNode* prev=head;
        while(mov!=NULL){
            if(req==1){
                ListNode* tem=mov;
                head=mov->next;
                delete tem;
                break;
            }
            else if(count==req){
        ListNode *t=prev->next;
        prev->next=prev->next->next;
        delete t;
            break;
            }
            else{
                count++;
            }
            prev=mov;
            mov=mov->next;
        }
        return head;
    }
};