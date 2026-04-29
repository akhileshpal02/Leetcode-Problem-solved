class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int left = 0, start = 1;

        while (start < nums.size())
         {
            if (nums[left] == 0 && nums[start] != 0) 
            {
                swap(nums[left], nums[start]);
                left++;
            } 
            else if (nums[left] != 0) {
                left++;
            }
            start++;
        }

    }
};