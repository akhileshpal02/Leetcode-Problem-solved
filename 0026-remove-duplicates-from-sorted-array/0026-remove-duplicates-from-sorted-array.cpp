class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         int n = nums.size();
        if (n == 0) return 0;

        int start = 0, end = 1;
        vector<int> ans;

        ans.push_back(nums[start]);

        while (end < n) {
            while (end < n && nums[start] == nums[end]) {
                end++;
            }

            if (end < n) {
                ans.push_back(nums[end]);
                start = end;
                end++;
            }
        }

        // copy back to nums
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        return ans.size();
    }
};