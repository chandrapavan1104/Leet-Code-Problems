class Solution {
public:
    int bs(vector<int>& nums, int l, int h, int target){
        if(h > l){
            int mid = (l+h)/2;
            if(nums[mid] == target)
                return mid;
            if(target > nums[mid] && target < nums[mid+1])
                return mid+1;
            if(target > nums[mid-1] && target < nums[mid])
                return mid;
            if(target > nums[mid])
                return bs(nums, mid, h, target);
            else
                return bs(nums, l, mid, target);
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int s = nums.size();
        if(target <= nums[0]){
                return 0;
        }
        if(target > nums[s-1]){
            return s;
        }
        if(target == nums[s-1]){
                return s-1;
        }
        return bs(nums, 0, s-1, target);
    }
};