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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        //counting the number of elements in ll.
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        //for new ll n-kth element becomes the last element.
        //n-k+1 th term becomes the new head.
        // need to find k,  if k>=n.
        if(n==0 || n==1)
        return head;

        k=k%n;
        if(k==0){
            return head;
        }
        int cnt=1; //as points to first element.
        ListNode* in=head;
        ListNode* end=head;
        while(end->next!=NULL){
            end=end->next;
        }
        int req=n-k;
        while(cnt!=req){
            in=in->next;
            cnt++;
        }
        ListNode* new_Head=in->next;
        end->next=head;
        in->next=NULL;
        head=new_Head;
        return head;

    }
};