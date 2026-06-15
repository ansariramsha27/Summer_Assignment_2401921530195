class Solution {
public:
    int i = 0;                                               
    string repeat(string s, int times) {                      
        for(int n = size(s); --times; s += s.substr(0, n));
        return s;
    }
    string decodeString(string& s) {
        string ans = "", n = "";
        while(i < size(s) && s[i] != ']') {                   
            for(; i < size(s) && isalpha(s[i]); i++)        
                ans += s[i]; 
            if(i >= size(s) || s[i] == ']') continue;         
            for(n = ""; i < size(s) && isdigit(s[i]); i++)    
                n += s[i];
            i++;                                              
            ans += repeat(decodeString(s), stoi(n));         
            i++;                                                 
        } 
        return ans;
    }
};
