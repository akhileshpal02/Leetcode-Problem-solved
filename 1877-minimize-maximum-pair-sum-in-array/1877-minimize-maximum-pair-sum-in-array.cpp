class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0,end=n-1;
        int ans=INT_MIN;
        while(start<end)
        {
            int sum=nums[start]+nums[end];
            ans=max(ans,sum);
            start++,end--;
        }

        return ans;
    }
};