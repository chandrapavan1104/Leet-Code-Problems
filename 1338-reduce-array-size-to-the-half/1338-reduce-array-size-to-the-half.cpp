class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int l = arr.size();
        vector<int> c;
        int s=0;
        unordered_map<int,int> count;
        for(int i=0; i<l; i++){
            count[arr[i]]++;
        }
       
        for(auto x:count){
            c.push_back(x.second);
        }
        sort(c.begin(),c.end());
        for(int i=c.size()-1; i>=0; i--){
            s+=c[i];
            if(s>=l/2)
                return c.size()-i;
        }
        return l/2;
    }
};