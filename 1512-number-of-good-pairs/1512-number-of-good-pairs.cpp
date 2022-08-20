class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a[101] ={0}, s=0;
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) != count.end())
                count[nums[i]]++;
            else
                count.insert({nums[i], 1});
        }
        
        for(auto x: count)
            cout<<x.first<<" "<<x.second<<endl;
        
        for(auto x: count){
            s += x.second*(x.second-1)/2;
        }
        return s;
    }
};