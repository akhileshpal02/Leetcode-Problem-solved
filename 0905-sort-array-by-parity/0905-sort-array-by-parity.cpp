class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
       int st=0,prev=0;
       int n=nums.size();
       while(st<n)
       {
           if(nums[st]%2==0)
           {
              swap(nums[st],nums[prev]);
              prev++,st++;
           }

           else
           {
              st++;
           }
       }

       return nums;
    }
};