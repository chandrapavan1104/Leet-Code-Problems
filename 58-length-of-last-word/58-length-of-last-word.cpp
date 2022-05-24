class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = 0;
        bool flag = false;
        char c = ' ';
        for(int i=s.size()-1;i>=0;i--){
            if(!isspace(s[i])){
                flag = true;
                l++;
            }
            if(isspace(s[i]) && flag == true)
                break;
        }
        return l;
    }
};