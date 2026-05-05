class Solution {
public:
    string reverseWords(string s) {
        
        int start=0, end=0;
        int n=s.size();
        while(end<=n)
        {
            if(s[end]==' ' || end==n)
            {
                int left=start, right=end-1; 
                while(left<right)
                {
                    swap(s[left],s[right]);
                    left++,right--;
                }

                start=end+1;
            }

            end++;
        }

        return s;
    }
};