class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.size()-1;
        int i = 0;
        while(i<j){
            while(!isalnum(s[i]) && i<s.size())
                i++;
            while(!isalnum(s[j]) && j>0)
                j--;
            if(i>j)
                return true;
            cout<<s[i]<<" "<<s[j]<<endl;
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};