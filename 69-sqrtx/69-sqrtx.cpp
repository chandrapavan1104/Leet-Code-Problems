class Solution {
    
    int bs(long long int l, long long int h, long long int k){
        if(l < h){
            long long int m = (l+h)/2;
            if((m*m <= k) && ((m+1)*(m+1) > k))
                return m;
            else if(m*m > k){
                return bs(l,m,k);
            }
            else
                return bs(m,h,k);
        }
        return -1;
    }
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        else if(x < 4)
            return 1;
        else if(x < 9)
            return 2;
        else
            return bs(1,x/2,x);
    }
};