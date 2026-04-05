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
    ListNode* partition(ListNode* head, int x) {
        
        // if(head==NULL && head->next==NULL)
        // return 0;

        ListNode *d1= new ListNode(0), *d2= new ListNode(0);
        ListNode *temp=head;
        ListNode *t1=d1, *t2=d2;

        while(temp)
        {
            if(temp->val<x)
            {
               t1->next=temp;
               temp=temp->next;
               t1=t1->next;
               t1->next=NULL; 
            }

            else
            {
                t2->next=temp;
                temp=temp->next;
                t2=t2->next;
                t2->next=NULL;
            }      
        }

        t2->next = NULL;        // terminate second list
        t1->next = d2->next;   // connect both lists

        ListNode* result = d1->next;

        delete d1;
        delete d2;

        return result;
    }
};