class Solution {
public:
    int countsetbits(int x){
        if(x>0)
            return (x%2 == 0 ? 0 : 1) + countsetbits(x/2);
        return 0;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans;
        for( int i=0; i<=n; i++)
            ans.push_back(countsetbits(i));
        return ans;
    }
};