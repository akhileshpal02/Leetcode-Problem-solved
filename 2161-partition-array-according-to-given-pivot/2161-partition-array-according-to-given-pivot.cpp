class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int n = nums.size();
        vector<int> ans(n);
        
        int left = 0;
        
        // place smaller
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                ans[left++] = nums[i];
            }
        }

        // place equal
        for (int i = 0; i < n; i++) {
            if (nums[i] == pivot) {
                ans[left++] = nums[i];
            }
        }

        // place greater
        for (int i = 0; i < n; i++) {
            if (nums[i] > pivot) {
                ans[left++] = nums[i];
            }
        }

        return ans;
    }
};