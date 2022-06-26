class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, s = 1;
        if(n == 0)
            return 0;
        for(int i = 2; i<=n; ++i){
            s = a + b;
            a = b;
            b = s;
        }
        return s;
    }
};