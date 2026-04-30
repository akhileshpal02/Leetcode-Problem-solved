class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size(), sum;
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++)
        {
            // Skip duplicate i values
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1, right = n - 1;
            
            while(left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                
                if(sum == 0)
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    left++;
                    right--;
                    
                    // Skip duplicates for left
                    while(left < right && nums[left] == nums[left - 1]) left++;
                    
                    // Skip duplicates for right
                    while(left < right && nums[right] == nums[right + 1]) right--;
                }
                else if(sum < 0)
                    left++;
                else
                    right--;
            }
        }
        
        return ans;

    }
};