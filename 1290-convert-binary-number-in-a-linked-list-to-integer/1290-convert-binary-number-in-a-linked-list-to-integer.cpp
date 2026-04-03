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
    int getDecimalValue(ListNode* head) {
        
        int count=0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }

        int ans=0;
        temp=head;
        while(temp)
        {
            ans+=(temp->val)*(1<<(count-1));
            temp=temp->next;
            count--;
        }

        return ans;
    }
};