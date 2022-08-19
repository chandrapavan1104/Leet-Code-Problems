class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size(); i++){
            temp.insert({nums[i],i});
        }
        for(int i=0;i<nums.size(); i++){
            int k = target - nums[i];
            cout<<k;
            if(temp.find(k) != temp.end()){
                if(i != temp[k]){
                ans.push_back(i);
                ans.push_back(temp[k]);
                break;
                }
            }
        }
        return ans;
    }
};