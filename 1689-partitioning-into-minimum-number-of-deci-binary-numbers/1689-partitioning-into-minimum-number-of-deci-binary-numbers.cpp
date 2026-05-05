class Solution {
public:
    int minPartitions(string n) {
        
        int maxDigit=0;
        for(int i=0;i<n.size();i++)
        {
            int digit= n[i]-'0';
            if(digit>maxDigit)
            maxDigit=digit;
        }

        return maxDigit;
    }
};