class Solution {
public:
    string reverseByType(string s) {
        
    int n = s.size();
    
    // Collect letter and special char indices
    vector<int> li, si;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') li.push_back(i);
        else si.push_back(i);
    }
    
    // Reverse letters using two pointer on their positions
    int l = 0, r = li.size() - 1;
    while (l < r) swap(s[li[l++]], s[li[r--]]);
    
    // Reverse specials using two pointer on their positions
    l = 0; r = si.size() - 1;
    while (l < r) swap(s[si[l++]], s[si[r--]]);
    
    return s;
    }
};