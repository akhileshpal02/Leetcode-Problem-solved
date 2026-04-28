class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int start=0,end=0;
        while(start<m && end<n)
        {
            if(nums1[start]<=nums2[end])
            start++;

            else
            {
                int a = nums1[start];
                nums1[start] = nums2[end];

                // place 'a' into correct position in nums2
                int k = end;
                nums2[k] = a;

                // fix order of nums2 safely
                while (k + 1 < n && nums2[k] > nums2[k + 1]) {
                    swap(nums2[k], nums2[k + 1]);
                    k++;
                }

                start++;
            }
        }

        while(end<n)
        {
            nums1[start]=nums2[end];
            start++,end++;
        }
    }
};