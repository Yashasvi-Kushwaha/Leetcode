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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        vector<int> answer;
        ListNode* curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=0;i<v.size()-1;i++){
            int max=v[i];
           for(int j=i+1;j<v.size();j++){
            if(v[j]>max){
                max=v[j];
                break;
            }
           }
           if(max>v[i]){
            answer.push_back(max);
           }
           else{
            answer.push_back(0);
           }
  
        }
        answer.push_back(0);
        return answer;
        
    }
};