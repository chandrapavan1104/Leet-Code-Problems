class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1])
                while(nums[i]<=nums[i-1]){
                    nums.erase(nums.begin()+i);
                    if(i>=nums.size())
                        break;
                }
        }
        return nums.size();
        }
};