class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int l = bits.size();
        if(l == 1)
            return true;
        if(l == 2 && bits[l-2] == 0)
            return true;
        int i;
        for(i=0; i<l-1; i++){
            if(bits[i] == 1)
                i++;
        }
        if(i == l-1)
            return true;
        else
            return false;
    }
};