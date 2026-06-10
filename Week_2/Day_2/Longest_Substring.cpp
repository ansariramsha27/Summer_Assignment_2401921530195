class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m;
        int low=0;
        int res=0;
        for(int high=0;high<s.length();high++)
        {
            while(m.find(s[high])!=m.end())
            {
                m.erase(s[low]);
                low++;
            }
            m.insert(s[high]);
            res=max(res,high-low+1);
        }
        return res;
    }
};
