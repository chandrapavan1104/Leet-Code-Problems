class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a[101] ={0}, s=0;
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) != count.end()){
                int t = count[nums[i]]/10000 + 1;
                count[nums[i]] = t * 10000 + t*(t-1)/2;
            }
            else
                count.insert({nums[i], 10000*1});
        }
        
        for(auto x: count)
            cout<<x.first<<" "<<x.second<<endl;
        
        for(auto x: count){
            s += x.second % 10000;
        }
        return s;
    }
};