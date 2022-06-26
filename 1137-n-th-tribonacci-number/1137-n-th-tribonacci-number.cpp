class Solution {
public:
    int tribonacci(int n) {
        if( n == 0 )
            return 0;
        int a = 0, b = 1, c = 1, s = 1;
        for(int i=3; i<=n; i++){
            s = a + b + c;
            a = b;
            b = c;
            c = s;
        }
        return s;
    }
};