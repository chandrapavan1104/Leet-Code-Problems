class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k % l;
        for(int i=0; i<l/2; i++){
            int t = nums[i];
            nums[i] = nums[l-i-1];
            nums[l-i-1] = t;
        }
        
        for(int i=0; i<k/2; i++){
            int t = nums[i];
            nums[i] = nums[k-i-1];
            nums[k-i-1] = t;
        }
        
        for(int i=k; i<(l+k+1)/2; i++){
            int t = nums[i];
            nums[i] = nums[l-1-(i-k)];
            nums[l-1-(i-k)] = t;
        }
    }
};