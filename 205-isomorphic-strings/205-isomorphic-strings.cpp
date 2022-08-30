class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_set<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end() && st.count(t[i])==0 )
            {
                mp[s[i]]=t[i];
                
                st.insert(t[i]);
            }
            
            else
            {
                
                
                if(mp[s[i]]==t[i] )
                    continue;
                else
                    return false;
                
            }
        }
        
        return true;
    }
};