class Solution {
public:
    int firstMatchingIndex(string s) {
        
        int n=s.size();
        int st=0,end=n-1;
        while(st<=end)
        {
            if(s[st]==s[end])
            return st;
            else
            {
                st++,end--;
            }
        }

        return -1;
    }
};