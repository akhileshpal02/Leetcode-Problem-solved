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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<int>ans;
        ListNode *curr=head;
        while(curr)
        {
            ans.push_back(curr->val);
            curr=curr->next;
        }

        left--,right--;
        while(left<right)
        {
            swap(ans[left],ans[right]);
            left++,right--;
        }

        int n=ans.size();
        ListNode *root=new ListNode(0);
        ListNode *prev=root;
        for(int i=0;i<n;i++)
        {
           prev->next=new ListNode(ans[i]);
           prev=prev->next;
        }

        return root->next;
    }
};