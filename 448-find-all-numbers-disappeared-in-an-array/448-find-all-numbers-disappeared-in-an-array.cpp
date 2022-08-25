class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> k;
        for(int i=0; i<nums.size(); i++)
            s.insert(nums[i]);
        for(int i=1; i<=nums.size(); i++)
            if(s.find(i) == s.end())
                k.push_back(i);
        return k;
    }
};