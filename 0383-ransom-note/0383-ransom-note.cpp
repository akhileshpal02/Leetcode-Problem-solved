class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        string n=ransomNote,m=magazine;
        sort(n.begin(),n.end());
        sort(m.begin(),m.end());

        int first=0,second=0;
        int p=ransomNote.size(),q=magazine.size();
        while(second<q)
        {
            if(n[first]==m[second])
            first++,second++;

            else
            second++;
        }

        if(first==p)
        return true;
        else
        return false;
    }
};