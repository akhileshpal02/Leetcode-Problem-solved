class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());

        int i = 0;
        while (i < n) {
            int j = i;

            // count first group
            while (j < n && nums[j] == nums[i]) j++;
            int n1 = j - i;

            // count second group only if diff is exactly 1
            if (j < n && nums[j] == nums[i] + 1) {
                int k = j;
                while (k < n && nums[k] == nums[j]) k++;
                int n2 = k - j;

                ans = max(ans, n1 + n2);
            }

            i = j; // move to next distinct group
        }
        return ans; 
    }
};