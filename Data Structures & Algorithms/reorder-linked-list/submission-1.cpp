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
    void reorderList(ListNode* head) {
        //Finding the middle node of LL
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
          ListNode* temp=slow->next;
        slow->next=nullptr;
      
        ListNode* prev=nullptr;
        while(temp)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        //Merging 
        ListNode* first=head;
        ListNode* second=prev;
        
    while(second)
    {
        ListNode* temp1=first->next;
        ListNode* temp2=second->next;
        first->next=second;
        
        second->next=temp1;
    
        first=temp1;
        second=temp2;
    }


        
    }
};
