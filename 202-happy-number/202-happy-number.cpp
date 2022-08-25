class Solution {
public:
    int sod(int n){
        int s = 0;
        while(n>0){
            int t = n%10;
            s += t*t;
            n /= 10;
        }
        return s;
    }
    
    bool isHappy(int n) {
        int i = 10;
        while(i--){
            if(n == 1)
                return true;
            n = sod(n);
    }
    return false;
    }
};