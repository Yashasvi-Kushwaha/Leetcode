# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        new_list=None
        temp1=list1
        temp2=list2
        
        head=new_list
        tail=new_list
        if temp1 is None:
            return list2
        if temp2 is None:
            return list1

        if(temp1.val<=temp2.val):
            head=temp1
            tail=temp1
            temp1=temp1.next
        else:
            head=temp2
            tail=temp2
            temp2=temp2.next
        while(temp1 != None and temp2!=None):
            if(temp1.val<=temp2.val):
                tail.next=temp1
                tail=temp1
                temp1=temp1.next
            else:
                tail.next=temp2
                tail=temp2
                temp2=temp2.next
        if temp1 is None and temp2 is not None:
            while(temp2!=None):
                tail.next=temp2
                tail=temp2
              
                temp2=temp2.next
        if temp2 is None and temp1 is not None:
            while(temp1!=None):
                tail.next=temp1
                tail=temp1
                
                temp1=temp1.next
    
        return head



        