class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> temp;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(target - nums[i]) != temp.end()){
                ans.push_back(temp[target - nums[i]]);
                ans.push_back(i);
                break;
            }
            else
                temp[nums[i]] = i;
        }
        return ans;
    }
};