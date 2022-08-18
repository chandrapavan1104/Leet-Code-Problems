class Solution {
public:
    bool checkRecord(string s) {
        int c =0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A')
                c++;
            if(c > 1)
                return false;
            if(s[i] == 'L' && (i+2 < s.size()))
                if(s[i+1] == 'L' && s[i+2] == 'L')
                    return false;
        }
        return true;
    }
};