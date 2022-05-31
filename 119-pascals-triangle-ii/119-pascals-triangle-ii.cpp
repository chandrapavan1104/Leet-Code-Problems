class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> f;
        f.push_back({1});
        if(rowIndex == 0)
            return f[0];
        f.push_back({1,1});
        
        for(int i=2;i<=rowIndex;i++){
            vector<int> t;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    t.push_back({1});
                else{
                    int k = f[i-1][j-1] + f[i-1][j];
                    t.push_back({k});
                }
            }
            f.push_back(t);
        }
        return f[rowIndex];
    }
};