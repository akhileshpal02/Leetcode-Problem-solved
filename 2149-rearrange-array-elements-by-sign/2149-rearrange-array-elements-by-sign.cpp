class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            pos.push_back(nums[i]);
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            neg.push_back(nums[i]);
        }

        vector<int>ans(n);
        int st1=0,st2=0,i=0;
        while(st1<pos.size()&&st2<neg.size())
        {
            if(i%2==0)
            ans[i]=pos[st1++];
            else
            ans[i]=neg[st2++];

            i++;
        }

        while (st1 < pos.size()) 
        ans[i++] = pos[st1++];
        while (st2 < neg.size())
        ans[i++] = neg[st2++];
        
        return ans;
    }
};