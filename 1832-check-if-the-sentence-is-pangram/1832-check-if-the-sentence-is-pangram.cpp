class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26] = {0};
        for(int i=0; i<sentence.size(); i++){
            a[(int)sentence[i] - 97] = 1;
        }
        for(int i=0; i<26; i++){
            cout<<a[i]<<" ";
            if(a[i] == 0)
                return false;
        }
        return true;
    }
};