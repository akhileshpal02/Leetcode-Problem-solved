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
    
    int pairSum(ListNode* head) {
        
        // Step 1: Store all node values in a vector
        vector<int> vals;
        ListNode* temp = head;
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Use two pointers to find max twin sum
        int ans = INT_MIN;
        int left = 0, right = vals.size() - 1;

        while (left < right) {
            ans = max(ans, vals[left] + vals[right]);
            left++;
            right--;
        }

        return ans;

    }
};