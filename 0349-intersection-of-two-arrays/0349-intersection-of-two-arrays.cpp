class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int n1=nums1.size(),n2=nums2.size();

        vector<int>ans;

        int first=0,second=0;
        while(first<n1 && second<n2)
        {
            if(nums1[first]<nums2[second])
            first++;

            else if(nums1[first]==nums2[second])
            {
                ans.push_back(nums1[first]);
                first++,second++;
            }

            else
            second++;
        }

      // Remove duplicates using set
        set<int> s(ans.begin(), ans.end());

        // Convert set back to vector
        vector<int> result(s.begin(), s.end());

        return result;
    }
};