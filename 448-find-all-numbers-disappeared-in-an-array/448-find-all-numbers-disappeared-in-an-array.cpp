class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> k(n+1,0);
        vector<int> ans;
        for(auto x:nums){
            k[x]++;
        }
        for(int i=1; i<=n; i++)
            if(k[i] == 0)
                ans.push_back(i);
        return ans;
    }
};
