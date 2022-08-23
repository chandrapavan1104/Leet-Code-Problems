class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s =0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        return n*(n+1)/2 - s;
    }
};