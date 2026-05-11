class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>ans;
        for(int i=0;i<n;i++)
        ans[nums[i]]++;

        for (auto it = ans.begin(); it != ans.end(); it++) 
        {
            if (it->second == 1)
            return it->first;
        }

        return -1;
    }
};