class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a[101] ={0}, s=0;
        for(int i=0; i<nums.size(); i++){
            a[nums[i]]++;
        }
        for(int i=0; i<101; i++){
            if(a[i] != 0)
                s+=a[i]*(a[i]-1)/2;
        }
        return s;
    }
};