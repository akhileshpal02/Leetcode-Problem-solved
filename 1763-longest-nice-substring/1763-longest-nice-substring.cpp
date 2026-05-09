class Solution {
public:
    string longestNiceSubstring(string s) {
        
        if(s.size()<2) return "";

        unordered_set<char>used;
        for(int i=0;i<s.size();i++)
        used.insert(s[i]);

        for(int i=0;i<s.size();i++)
        {
            if(used.count(tolower(s[i]))==true && used.count(toupper(s[i]))==true)
            continue;

            string left=longestNiceSubstring(s.substr(0,i));
            string right= longestNiceSubstring(s.substr(i+1));

            return left.size()>=right.size()? left : right;
        }

        return s;
    }
};