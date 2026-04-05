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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *d1= new ListNode(0);
        ListNode *d2= new ListNode(0);
        ListNode *temp=head;
        ListNode *t1=d1, *t2=d2;
        int index=1;

        while(temp)
        {
            if(index%2!=0)
            {
               t1->next= temp;
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

            index++;
        }

        t2->next=NULL;
        t1->next=d2->next;

        ListNode *ans=d1->next;
        delete d1;
        delete d2;

        return ans;
    }
};