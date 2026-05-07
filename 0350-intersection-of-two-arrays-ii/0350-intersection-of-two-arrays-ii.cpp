class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size(),n2=nums2.size();
        int start=0, end=0;
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(start<n1 && end<n2)
        {
            if(nums1[start]<nums2[end])
            start++;

            else if(nums1[start]>nums2[end])
            end++;

            else
            {
                ans.push_back(nums1[start]);
                start++, end++;
            }
        }

        return ans;
    }
};