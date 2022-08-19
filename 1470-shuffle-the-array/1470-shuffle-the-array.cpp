class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i,j;
        vector<int> ans;
        for(i=0, j=n; i<n; i++,j++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        return ans;
    }
};